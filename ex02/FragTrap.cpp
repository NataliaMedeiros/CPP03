/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 10:28:02 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 10:55:10 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source)
{
	std::cout << "FragTrap '" << this->name << "' is called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	if (this != &source)
	{
		ClapTrap::operator=(source);
	}
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap '" << this->name << "' is born!" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap '" << this->name << "' destructor is called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		std::cout << "FragTrap '" << this->name << "' attacks '"
				<< target << "', causing " << this->attackDamage
				<< " points of damage!" << std::endl;
		return ;
	}
	std::cout << "FragTrap '" << this->name
	<< "' is out of hit points/energy points and can't attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "FragTrap '" << name << "' did a high five! ✋" << std::endl;
		return;
	}
	std::cout << "FragTrap '" << this->name
	<< "' is out of hit points/energy points and can't give a high five!" << std::endl;
}
