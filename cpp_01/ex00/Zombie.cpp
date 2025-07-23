/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:00:39 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 13:05:49 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) 
{
	std::cout << GREEN << name << " created" << RESET << std::endl;
}

Zombie::~Zombie()
{
    std::cout << RED << name << " destroyed" << RESET << std::endl;
}

void Zombie::announce() const
{
    std::cout << YELLOW << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
