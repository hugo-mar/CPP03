/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:53:43 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/07/16 15:54:20 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("default") {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destroyed." << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints--;
		std::cout << "FragTrap " << _name << " enthusiastically attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << _name << " cannot attack. No energy or hit points." << std::endl;
    }
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " requests high fives!" << std::endl;
}