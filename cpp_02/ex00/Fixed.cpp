/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:39:52 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 18:02:16 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @brief Default constructor for Fixed class
 *
 * Initializes a Fixed object with a raw bit value of 0.
 */

Fixed::Fixed() : _rawBits(0)
{
	std::cout << BLUE << "Default constructor called" << RESET << std::endl;
}

/**
 * @brief Copy constructor for Fixed class
 *
 * Initializes a Fixed object as a copy of another Fixed object.
 *
 * @param other The Fixed object to copy from.
 */

Fixed::Fixed(const Fixed& other) : _rawBits(other._rawBits)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
}

/**
 * @brief Assignment operator for Fixed class
 *
 * Assigns the raw bit value from another Fixed object to this one.
 *
 * @param other The Fixed object to assign from.
 * @return A reference to this Fixed object.
 */

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		this->_rawBits = other._rawBits;
	}
	return *this;
}

/**
 * @brief Destructor for Fixed class
 *
 * Cleans up resources when a Fixed object is destroyed.
 */

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

/**
 * @brief Returns the raw bit value of the Fixed object
 *
 * @return The raw bit value.
 */

int Fixed::getRawBits(void) const
{
	std::cout << CYAN << "getRawBits member function called" << RESET << std::endl;
	return this->_rawBits;
}

/**
 * @brief Sets the raw bit value of the Fixed object
 *
 * @param raw The new raw bit value to set.
 */

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}
