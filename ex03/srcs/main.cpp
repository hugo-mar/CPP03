/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:09:55 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/07/16 16:04:33 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	
	std::cout << "\n--- ClapTrap Tests ---\n" << std::endl;
	ClapTrap a("Kid A");
	ClapTrap b;
	ClapTrap c(a);
	b = a;

	a.attack("TargetBot");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << "\n--- ScavTrap Tests ---\n" << std::endl;
	ScavTrap s1("Mr Robot");
	ScavTrap s2;
	ScavTrap s3(s1);
	s2 = s1;

	s1.attack("EnemyBot");
	s1.takeDamage(30);
	s1.beRepaired(10);
	s1.guardGate();

	std::cout << "\n--- FragTrap Tests ---\n" << std::endl;
	FragTrap f1("WALL-E");
	FragTrap f2;
	FragTrap f3(f1);
	f2 = f1;

	f1.attack("EnemyBot");
	f1.takeDamage(30);
	f1.beRepaired(10);
	f1.highFivesGuys();

	std::cout << "\n--- DiamondTrap Tests ---\n" << std::endl;
    DiamondTrap d1("HAL 9000");
    DiamondTrap d2;
    DiamondTrap d3(d1);
    d2 = d1;

    d1.attack("BossBot");
    d1.takeDamage(40);
    d1.beRepaired(20);
    d1.whoAmI();

	std::cout << "\n--- End of main ---\n" << std::endl;
	
	return 0;
}