/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:44:34 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:44:35 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "FragTrap " << this->_name << " is constructed!" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "FragTrap " << this->_name << " is constructed!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << BLUE << "FragTrap " << _name << " is copy constructed!" << RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << CYAN << "FragTrap " << _name << " is assigned!" << RESET << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << RED << "FragTrap " << _name << " is destroyed!" << RESET << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << YELLOW << "FragTrap " << this->_name << " can't attack!" << RESET << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << YELLOW << "FragTrap " << this->_name << " explosively attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << MAGENTA << "FragTrap " << this->_name << " requests a high five!" << RESET << std::endl;
}
