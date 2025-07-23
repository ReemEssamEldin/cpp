/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:04:24 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 15:47:21 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
    Weapon club(MAGENTA "crude spiked club" RESET);
    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(club);

    bob.attack();
    jim.attack();

    club.setType(BLUE "some other type of club" RESET);

    bob.attack();
    jim.attack();
}
