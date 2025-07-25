/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:55:21 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 12:08:22 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{}

Fixed::Fixed(const int intValue) : _rawBits(intValue << _fractionalBits)
{}

Fixed::Fixed(const float floatValue) : _rawBits(roundf(floatValue * (1 << _fractionalBits)))
{}

Fixed::Fixed(const Fixed& other) : _rawBits(other._rawBits)
{}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other) {
		this->_rawBits = other._rawBits;
	}
	return *this;
}

Fixed::~Fixed()
{}

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

bool Fixed::operator>(const Fixed& other) const
{
	return this->_rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed& other) const
{
	return this->_rawBits < other._rawBits;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return this->_rawBits >= other._rawBits;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return this->_rawBits <= other._rawBits;
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->_rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return this->_rawBits != other._rawBits;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result._rawBits = this->_rawBits + other._rawBits;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result._rawBits = this->_rawBits - other._rawBits;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result._rawBits = (static_cast<long>(this->_rawBits) * other._rawBits) >> _fractionalBits;
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result._rawBits = (static_cast<long>(this->_rawBits) << _fractionalBits) / other._rawBits;
	return result;
}

// Increment/decrement operators
Fixed& Fixed::operator++()
{
	this->_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_rawBits++;
	return temp;
}

Fixed& Fixed::operator--()
{
	this->_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_rawBits--;
	return temp;
}

// Static min/max functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
