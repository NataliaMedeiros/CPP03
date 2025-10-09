/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/15 10:00:04 by nmedeiro      #+#    #+#                 */
/*   Updated: 2025/10/09 10:02:14 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "-----Test 1-----" << std::endl;
	ScavTrap marry("Marry");
	marry.attack("Harry");
	ScavTrap copy(marry);
	copy.attack("Target");
	ScavTrap assigned("Tonny");
	assigned = marry;
	assigned.attack("Assigned one");

	std::cout << "\n-----Test 2-----" <<std::endl;
	ScavTrap scav("Lili");
	scav.attack("Ana");
	scav.takeDamage(15);
	scav.beRepaired(5);
	scav.guardGate();

	std::cout << "\n-----Test3-----\n";
	ScavTrap original("Original");
	original.attack("Someone");
	ScavTrap copyOriginal(original);
	copyOriginal.attack("Target");
	ScavTrap assigned2("Temp");
	assigned2 = original;
	assigned2.attack("Assigned one");

	// std::cout << "\n-----Test5-----\n";
	// ScavTrap jane("Jane");

	// for (int i = 0; i < 51; i++) {
	// 	jane.attack("Mark");
	// }

	// jane.takeDamage(80);
	// jane.attack("Another");
	// jane.beRepaired(10);
	// jane.guardGate();

	std::cout << "\n===== END OF TESTS =====\n";
	return 0;
}
