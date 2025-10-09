/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 09:31:23 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 10:17:14 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap(); //Default constructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clapTrap); //Copy constructor
		ClapTrap& operator=(const ClapTrap &clapTrap); //Copy assignment operator
		~ClapTrap();//Destructor

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
