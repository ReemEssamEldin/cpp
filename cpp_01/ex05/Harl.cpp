/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:10:26 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/24 15:41:58 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug()
{
    std::cout << GREEN <<"[ DEBUG ] "<< RESET << std::endl;
    std::cout << MAGENTA << "I love having extra cheese for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info()
{
    std::cout << GREEN << "[ INFO ] " << RESET << std::endl;
    std::cout << YELLOW << "I cannot believe adding extra cheese costs more money. You didn’t put enough cheese in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning()
{
    std::cout << GREEN << "[ WARNING ] " << RESET << std::endl;
    std::cout << BLUE << "I think I deserve to have some extra cheese for free. I’ve been coming for years, whereas you started working here just last month." << RESET << std::endl;
}

void Harl::error()
{
    std::cout << RED << "[ ERROR ] " << RESET << std::endl;
    std::cout << CYAN << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaints[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int index = -1;

	for (size_t i = 0; i < level.length(); ++i)
	{
		level[i] = toupper(level[i]);
	}
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			index = i;
			break;
		}
	}
	if (index != -1)
	{
		(this->*complaints[index])();
	}
	else
	{
		std::cout << RED << "complaint " << level << " is not recognized." << RESET << std::endl;
		std::cout << GREEN << "Available levels: (DEBUG, INFO, WARNING, ERROR)." << RESET << std::endl;
	}
}
