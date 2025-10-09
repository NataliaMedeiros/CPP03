/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 10:51:10 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 10:53:17 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : ClapTrap, FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		~DiamondTrap();
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::~DiamondTrap()
{
}


#endif
