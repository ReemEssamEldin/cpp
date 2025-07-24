/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:21:56 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/24 15:42:22 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


int main(int argc, char **argv)
{
	Harl	harl;
	std::string level;

	if (argc != 2)
	{
		std::cerr << GREEN <<"Enter a complaint level (DEBUG, INFO, WARNING, ERROR): " << RESET << std::endl;
		return 1;
	}

	else
	{
		level = argv[1];
		harl.complain(level);
	}
	return 0;
}
