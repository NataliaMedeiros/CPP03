/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 09:31:23 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/08 11:48:47 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
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

	// std::string getName() const;
	// int getHitPoints() const;
	// int getEnergyPoints() const;
	// int getAttackDamage() const;

	// void setHitPoints(int const value);
	// void setEnergyPoints(int const value);
	// void setAttackDamage(int const value);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
