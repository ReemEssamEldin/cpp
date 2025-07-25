/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:52:19 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 14:38:02 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
	std::cout << BLUE << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int intValue) : _rawBits(intValue << _fractionalBits)
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float floatValue) : _rawBits(roundf(floatValue * (1 << _fractionalBits)))
{
	std::cout << YELLOW << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& other) : _rawBits(other._rawBits)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << MAGENTA << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {
		this->_rawBits = other._rawBits;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_rawBits) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_rawBits >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
