/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:09:25 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 15:00:48 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << BLUE << a << RESET << std::endl;
	std::cout << GREEN << ++a << RESET << std::endl;
	std::cout << BLUE << a << RESET << std::endl;
	std::cout << MAGENTA << a++ << RESET << std::endl;
	std::cout << CYAN << a << RESET << std::endl;

	std::cout << YELLOW << b << RESET << std::endl;

	std::cout << GREEN << Fixed::max(a, b) << RESET << std::endl;

	return 0;
}
