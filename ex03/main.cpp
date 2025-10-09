/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 10:13:26 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 15:36:34 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(void)
{
    ClapTrap clap("clap");
	// ClapTrap Ninja("NINJA ASSASSIN");
    // ScavTrap scavver("SCAVVER");
    // FragTrap fragger("FRAGGER");
    // DiamondTrap diamondder("DIAMONDDER");

	clap.takeDamage(5);
    clap.beRepaired(1);
    clap.attack("anti-clap");
	clap.takeDamage(20);
    clap.beRepaired(1);

    // scavver.attack("NINJA ASSASSIN");
    // scavver.takeDamage(5);
    // scavver.beRepaired(1);
    // scavver.guardGate();
    // scavver.takeDamage(9);
    // scavver.attack("NINJA ASSASSIN");
    // scavver.takeDamage(105);
    // scavver.beRepaired(1);
    // scavver.guardGate();

    // fragger.attack("NINJA ASSASSIN");
    // fragger.takeDamage(50);
    // fragger.beRepaired(11);
    // fragger.highFivesGuys();
    // fragger.takeDamage(90);
    // fragger.attack("NINJA ASSASSIN");
    // fragger.highFivesGuys();

    // diamondder.attack("NINJA ASSASSIN");
    // diamondder.takeDamage(50);
    // diamondder.beRepaired(11);
    // diamondder.whoAmI();
    // diamondder.takeDamage(90);
    // diamondder.attack("NINJA ASSASSIN");
    // diamondder.whoAmI();


    return (0);
}
