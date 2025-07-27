/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:45:13 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:45:14 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "ScavTrap " << _name << " is constructed!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "ScavTrap " << _name << " is constructed!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << GREEN << "ScavTrap " << _name << " is copy constructed!" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << CYAN << "ScavTrap " << _name << " is assigned!" << RESET << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap " << _name << " is destroyed!" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints == 0 || _energyPoints == 0) {
		std::cout << RED << "ScavTrap " << _name << " can't attack!" << RESET << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << YELLOW << "ScavTrap " << _name << " ferociously attacks " << target
			<< ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << YELLOW << "ScavTrap " << _name << " is now in Gate keeper mode!" << RESET << std::endl;
}
