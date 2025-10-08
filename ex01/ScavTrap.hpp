/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:44:54 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/08 14:36:13 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

//inherit the constructors and destructor from Clap-Trap.
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &source);
		ScavTrap &operator=(const ScavTrap &source);
		ScavTrap(std::string name);
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate();
};


#endif
