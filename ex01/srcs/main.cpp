/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:09:55 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/07/15 22:55:41 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << "\n--- End of main ---\n" << std::endl;
	
	return 0;
}