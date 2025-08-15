/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmedeiro <nmedeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 09:59:33 by nmedeiro          #+#    #+#             */
/*   Updated: 2025/08/15 10:06:31 by nmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
    private:
        strd::string    name;
        int             hitPoints;
        int             energypoints;
        int             attackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap& operator=(const ClapTrap &clapTrap);
        ~ClapTrap();
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif