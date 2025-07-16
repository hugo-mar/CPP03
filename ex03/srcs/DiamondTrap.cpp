/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:45:01 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/07/16 16:03:13 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default") {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}