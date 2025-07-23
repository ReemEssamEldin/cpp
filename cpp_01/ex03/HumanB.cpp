/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:04:17 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 15:46:52 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void HumanB::attack() const
{
    if (weapon)
        std::cout << YELLOW << name << RESET << RED <<" attacks with their " << RESET << weapon->getType() << RESET << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}
