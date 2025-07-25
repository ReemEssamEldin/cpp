/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:51:56 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 14:37:55 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl; // represents the fixed-point value of 1234.4321
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << BLUE << "a is " << a.toInt() << " as integer" << RESET << std::endl; 
	std::cout << BLUE << "b is " << b.toInt() << "   as integer" << RESET << std::endl;
	std::cout << BLUE << "c is " << c.toInt() << "   as integer" << RESET << std::endl;
	std::cout << BLUE << "d is " << d.toInt() << "   as integer" << RESET << std::endl;

	std::cout << YELLOW << "a is " << a.toFloat() << " as float" << RESET << std::endl;
	std::cout << YELLOW << "b is " << b.toFloat() << "      as float" << RESET << std::endl;
	std::cout << YELLOW << "c is " << c.toFloat() << " as float" << RESET << std::endl;
	std::cout << YELLOW << "d is " << d.toFloat() << "      as float" << RESET << std::endl;

	return 0;
}
