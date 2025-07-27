/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:42:27 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/27 02:42:28 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap robot1("R2D2");
	ClapTrap robot2("C3PO");


	robot1.attack("target dummy");
	robot1.takeDamage(5);
	robot1.beRepaired(3);
	robot1.takeDamage(15);
	robot1.attack("another target");

	return 0;
}
