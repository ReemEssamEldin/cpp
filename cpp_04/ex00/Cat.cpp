/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:47:26 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:48:17 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << GREEN << "Cat constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << CYAN << "Cat assignment operator called" << RESET << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << RED << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
	std::cout << MAGENTA << "Meow! Meow!" << RESET << std::endl;
}
