/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:45:39 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 10:35:44 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
	std::cout << "ScavTrap '" << name << "' is called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &source)
{
	if (this != &source)
	{
		ClapTrap::operator=(source);
	}
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	//The name is already initialized for ClapTrap
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap '" << this->name << "' is born!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor is called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ScavTrap '" << this->name << "' attacks "
				<< target << ", causing " << this->attackDamage
				<< " points of damage!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name
	<< " is out of hit points/energy points and can't attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << name << " is now in the Gate keeper mode!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name
	<< " is out of hit points/energy points and can't keep the Gate!" << std::endl;
}
