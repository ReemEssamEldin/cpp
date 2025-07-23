/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:00:42 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 13:04:51 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

class Zombie
{
	private:
    	std::string name;
	public:
    	Zombie(std::string name);
    	~Zombie();
    	void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
