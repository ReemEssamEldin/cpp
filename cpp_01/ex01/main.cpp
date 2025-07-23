/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:09:19 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 14:23:19 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

std::string generateRandomName()
{
	const std::string names[] = {"Alice    ", "Bob      ", "Charlie  ", "Diana    ", "Eve      "};
	return names[rand() % (sizeof(names) / sizeof(names[0]))];
}

int main()
{
    int Num = 5;

	Zombie* horde = zombieHorde(Num, generateRandomName());
    if (!horde)
        return 1;
    for (int i = 0; i < Num; ++i)
	{
		horde[i].setName(generateRandomName());
	}

	for (int i = 0; i < Num; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}
