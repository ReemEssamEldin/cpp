/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:45:22 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:45:23 by reldahli         ###   ########.fr       */
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

	void attack(const std::string& target);
	void guardGate();
};

#endif
