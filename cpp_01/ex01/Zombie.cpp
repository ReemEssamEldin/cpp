/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:10:33 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 14:22:01 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << GREEN << "Zombie created" << RESET << std::endl;
	name = "Unnamed";
}

Zombie::~Zombie()
{
    std::cout << RED << "Zombie " << name << " destroyed" << RESET << std::endl;
}

void Zombie::setName(std::string n)
{
    name = n;
}

void Zombie::announce() const
{
    std::cout << MAGENTA << name << RESET << YELLOW << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
