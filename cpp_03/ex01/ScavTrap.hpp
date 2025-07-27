/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:43:57 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:44:00 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();

	void attack(const std::string& target); // Override attack method from ClapTrap
	void guardGate(); // extended functionality specific to ScavTrap
};

#endif
