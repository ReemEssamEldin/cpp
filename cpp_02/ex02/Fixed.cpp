/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:55:21 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 14:56:57 by reldahli         ###   ########.fr       */
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
	if (this != &other)
	{
		this->_rawBits = other._rawBits; // Avoid self-assignment
	}
	return *this;
}

Fixed::~Fixed()
{}

int Fixed::getRawBits(void) const
{
	return this->_rawBits; // Return the raw bits directly
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw; // Set the raw bits directly
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_rawBits) / (1 << _fractionalBits); // Convert raw bits to float
}

int Fixed::toInt(void) const
{
	return this->_rawBits >> _fractionalBits; // Convert raw bits to int by shifting
}

bool Fixed::operator>(const Fixed& other) const
{
	return this->_rawBits > other._rawBits; // Compare raw bits with another Fixed object
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
	result._rawBits = this->_rawBits + other._rawBits; // Add raw bits of both Fixed objects
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result._rawBits = this->_rawBits - other._rawBits; // Subtract raw bits of the other Fixed object from this one
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result._rawBits = (static_cast<long>(this->_rawBits) * other._rawBits) >> _fractionalBits; // Multiply raw bits and adjust for fractional bits
	// Using long to prevent overflow during multiplication
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result._rawBits = (static_cast<long>(this->_rawBits) << _fractionalBits) / other._rawBits; // Divide raw bits and adjust for fractional bits
	// Using long to prevent overflow during division
	return result;
}

// Increment/decrement operators
Fixed& Fixed::operator++()
{
	this->_rawBits++; // Pre-increment: increment raw bits and return the current object
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this); // Post-increment: create a copy of the current object
	this->_rawBits++;
	return temp;
}

Fixed& Fixed::operator--()
{
	this->_rawBits--; // Pre-decrement: decrement raw bits and return the current object
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this); // Post-decrement: create a copy of the current object
	this->_rawBits--;
	return temp;
}

// Static min/max functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b; // Return the smaller of the two Fixed objects
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b; // Return the smaller of the two Fixed objects (const version)
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b; // Return the larger of the two Fixed objects
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b; // Return the larger of the two Fixed objects (const version)
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat(); // Output the Fixed object as a float
	return out;
}
