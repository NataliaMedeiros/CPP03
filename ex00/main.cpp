/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/15 10:00:04 by nmedeiro      #+#    #+#                 */
/*   Updated: 2025/10/08 12:36:24 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap test("Marry");
    test.attack("test");
	test.takeDamage(5);
	test.beRepaired(3);
	test.takeDamage(10);
	test.attack("John");
	test.beRepaired(5);

	// Another test
	ClapTrap other("Jane");
	other.attack("Harry");
	other.beRepaired(2);
	// otherClapTrap.takeDamage(25);
	// otherClapTrap.attack("Fans");
	// otherClapTrap.beRepaired(5);
	// otherClapTrap.takeDamage(10);

	return 0;
}
