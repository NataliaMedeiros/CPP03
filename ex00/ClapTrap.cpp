/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 09:45:41 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/08 09:56:27 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &clapTrap)
	{
		this->name = clapTrap.name;
		this->hitPoints = clapTrap.hitPoints;
		this->energyPoints = clapTrap.energyPoints;
		this->attackDamage = clapTrap.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
