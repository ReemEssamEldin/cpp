/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:54:34 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/24 14:45:16 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

std::string replaceAll(std::string text, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    while (true)
{
        size_t found = text.find(s1, pos);
        if (found == std::string::npos)
		{
            result.append(text, pos, text.size() - pos);
            break;
        }
        result.append(text, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    return result;
}

int main(int argc, char** argv)
{
    if (argc != 4 || !*argv[2] || !*argv[3])
{
        std::cerr << BLUE << "Usage: ./sedForLosers <filename> <s1> <s2>" << RESET << std::endl;
        return 1;
    }
    std::ifstream ifs(argv[1]);
    if (!ifs)
	{
        std::cerr << RED << "Error: cannot open input file" << RESET << std::endl;
        return 1;
    }
    std::ostringstream oss;
    oss << ifs.rdbuf();
    std::string content = oss.str();
    ifs.close();

    std::string replaced = replaceAll(content, argv[2], argv[3]);
    std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
	std::cout << GREEN << "Replacing all occurrences of '" << argv[2] << "' with '" << argv[3] << "' in file '" << argv[1] << "'." << RESET << std::endl;
	std::cout << MAGENTA << "Output will be saved to '" << argv[1] << ".replace'." << RESET << std::endl;

    if (!ofs) {
        std::cerr << RED << "Error: cannot open output file" << RESET << std::endl;
        return 1;
    }
    ofs << replaced;
    return 0;
}
