/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 09:59:45 by nmedeiro          #+#    #+#             */
/*   Updated: 2025/08/15 10:57:43 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energypoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), hitPoints(10), energypoints(10), attackDamage(0)
{
    std::cout << "Constructor with name as parameter called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = clapTrap.name;
    this->hitPoints = clapTrap.hitPoints;
    this->energypoints = clapTrap.energypoints;
    this->attackDamage = clapTrap.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &clapTrap)
    {
        this->name = clapTrap.name;
        this->hitPoints = clapTrap.hitPoints;
        this->energypoints = clapTrap.energypoints;
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
    std::cout << "ClapTrap " << this->name << " attacks" << target << std::endl;
    this->energypoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
    this->energypoints--;
}

