/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:04:30 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/23 15:47:42 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

/********** Color Mapping ********
 *          Bob --> GREEN        *
 *          Jim --> YELLOW       *
 * attacks wi.. --> RED          *
 * crude spik.. --> MAGENTA      *
 * some other.. --> BLUE         *
 *********************************/

class Weapon
{
	private:
    	std::string type;
	public:
	    Weapon(std::string type);
	    const std::string& getType() const;
	    void setType(const std::string& newType);
};

#endif
