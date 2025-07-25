/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:40:05 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 14:15:34 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
		int _rawBits; // fixed-point value
		static const int _fractionalBits = 8; // number of fractional bits

public:
	Fixed(); // default constructor
	Fixed(const Fixed& other); // copy constructor
	Fixed& operator=(const Fixed& other); // assignment operator
	~Fixed(); // destructor

	int getRawBits(void) const; // returns the raw value of the fixed-point number
	void setRawBits(int const raw); // sets the raw value of the fixed-point number
};

#endif
