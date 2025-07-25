/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:52:07 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 14:28:26 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

class Fixed
{
	private:
		int _rawBits; // Fixed-point representation
		static const int _fractionalBits = 8; // Number of bits used for the fractional part

	public:
		Fixed(); // Default constructor
		Fixed(const int intValue); // Constructor from integer
		Fixed(const float floatValue); // Constructor from float
		Fixed(const Fixed& other); // Copy constructor
		Fixed& operator=(const Fixed& other); // Copy assignment operator
		~Fixed(); // Destructor

		int getRawBits(void) const; // Get the raw bits
		void setRawBits(int const raw); // Set the raw bits
		float toFloat(void) const; // Convert to float
		int toInt(void) const; // Convert to integer
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
