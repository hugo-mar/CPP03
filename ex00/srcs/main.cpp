/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:09:55 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/07/15 20:20:52 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap a;
	ClapTrap b("Kid B");
	ClapTrap c(b);

	c = a;

	b.attack("RandomChump");
	b.beRepaired(5);
	b.takeDamage(2);

	a.attack("Kid B");
	c.attack("Chumpalino");

	return 0;
}