/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 09:45:41 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 10:00:50 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string newName) : name(newName), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor with name '" << this->name << "' as parameter called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;//attack cost 1 energy point
		std::cout << "ClapTrap " << this->name << " attacks " << target
				<< " causing " << this->attackDamage << " points of damage!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name
			<< " is out of hit points or energy points and can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
		return ;
	}
	hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;//Reparing cost 1 energy point
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " repaired "
				<< amount << " points, total of its hit point is "
				<< this->hitPoints << "!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name
			<< " is out of hit points or energy points and can't repaired!" << std::endl;
}
