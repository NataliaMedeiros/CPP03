/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 10:13:26 by natalia       #+#    #+#                 */
/*   Updated: 2025/10/09 10:45:52 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "\n----Test1-----\n";
	FragTrap marry("Mary");
	marry.attack("Harry");
	marry.takeDamage(15);
	marry.beRepaired(5);
	marry.highFivesGuys();

	std::cout << "\n----Test2-----\n";
	FragTrap original("Original");
	original.attack("Other");
	FragTrap copy(original);
	copy.attack("Target");
	FragTrap assigned("Temp");
	assigned = original;
	assigned.attack("New Target");

	// std::cout << "\n----Test3-----\n";
	// FragTrap frag("Liam");
	// for (int i = 0; i < 101; i++) {
	// 	frag.attack("Nina");
	// }
	// frag.takeDamage(80);
	// frag.attack("Laura");
	// frag.beRepaired(10);
	// frag.highFivesGuys();

	std::cout << "\n----END OF TESTS-----n";
	return 0;
}
