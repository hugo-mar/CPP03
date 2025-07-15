/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:02:02 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/07/15 23:04:18 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("default") {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " ferociously attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
	else {
		std::cout << "ScavTrap " << _name << " cannot attack. No energy or hit points." << std::endl;
    }
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}