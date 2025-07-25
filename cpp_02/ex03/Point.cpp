/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:17:39 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 12:18:21 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{}

Point::Point(const Point& other) : _x(other._x), _y(other._y)
{}

Point& Point::operator=(const Point& other)
{
	// Since _x and _y are const, we can't actually assign to them
	// This is a design choice - points are immutable once created
	// We still need this function for Orthodox Canonical Form
	(void)other; // Suppress unused parameter warning
	return *this;
}

Point::~Point()
{}

Fixed Point::getX(void) const
{
	return this->_x;
}

Fixed Point::getY(void) const
{
	return this->_y;
}
