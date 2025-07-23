/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:04:20 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 15:47:16 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
    	std::string name;
    	Weapon* weapon;
	public:
	    HumanB(std::string name);
	    void setWeapon(Weapon& weapon);
	    void attack() const;
};

#endif
