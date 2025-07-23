/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:26:24 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 14:49:07 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

int main()
{
	std::cout << GREEN << "Memory address and value of a string variable:" << RESET << std::endl;
	std::cout << YELLOW << "----------------------------------------------" << RESET << std::endl;
    std::string brain = BLUE "HI THIS IS BRAIN" RESET;
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

	std::cout << RED << "Memory address of the string variable:" << RESET << std::endl;
    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << RED << "Value of the string variable:" << RESET << std::endl;
    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
	std::cout << std::endl;

    return 0;
}
