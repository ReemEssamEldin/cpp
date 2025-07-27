/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:43:29 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:43:30 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap guard("Guardian");

	guard.attack("intruder");
	guard.takeDamage(30);
	guard.beRepaired(20);
	guard.guardGate();

	return 0;
}
