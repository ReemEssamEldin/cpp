/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:44:57 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:44:58 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap basic("Basic");
	ScavTrap guard("Guardian");
	FragTrap frag("Exploder");

	basic.attack("enemy");
	guard.attack("intruder");
	frag.attack("target");

	guard.guardGate();
	frag.highFivesGuys();

	return 0;
}
