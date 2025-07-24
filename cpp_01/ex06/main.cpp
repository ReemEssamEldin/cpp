/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:31:15 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/24 17:37:50 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	Harl harl;
	std::string level;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;

	if (argc != 2)
	{
		std::cerr << GREEN <<"Enter a complaint level (DEBUG, INFO, WARNING, ERROR): " << RESET << std::endl;
		return 1;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == argv[1])
		{
			index = i;
			break;
		}
	}
    switch (index)
	{
        case 0:
            harl.complain(levels[0]);
        case 1:
            harl.complain(levels[1]);
        case 2:
            harl.complain(levels[2]);
        case 3:
            harl.complain(levels[3]);
            break;
        default:
            std::cout << RED << "complaint " << argv[1] << " is not recognized." << RESET << std::endl;
            std::cout << GREEN << "Available levels: (DEBUG, INFO, WARNING, ERROR)." << RESET << std::endl;
    }
    return 0;
}
