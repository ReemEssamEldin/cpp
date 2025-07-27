/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:48:29 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:48:29 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << GREEN << "Dog constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	std::cout << CYAN << "Dog assignment operator called" << RESET << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << MAGENTA << "Woof! Woof!" << RESET << std::endl;
}
