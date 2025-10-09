/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 10:19:51 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 14:54:03 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &source);
		FragTrap &operator=(const FragTrap &source);
		FragTrap(std::string name);
		~FragTrap();

		void attack(const std::string &target);
		void highFivesGuys(void);
};

#endif
