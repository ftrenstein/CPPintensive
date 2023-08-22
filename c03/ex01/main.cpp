
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:22:21 by renstein          #+#    #+#             */
/*   Updated: 2023/08/22 18:19:10 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap	claptrap1("Valli");
	ClapTrap	claptrap2("FAT");
	ClapTrap	claptrap3("Boat");
	ClapTrap	claptrap4(claptrap1);

	claptrap3 = claptrap1;

	std::cout << "number 3\n";
	claptrap3.takeDamage(1000);

	std::cout << "number 1\n";
	claptrap1.attack("Red target");
	claptrap1.attack("Red target");
	claptrap1.attack("Red target");

	std::cout << "number 3\n";
	claptrap3.attack("Red target");
	claptrap3.attack("Red target");
	claptrap3.attack("Red target");

	std::cout << "number 1\n";
	claptrap1.takeDamage(5);
	claptrap1.attack("Red target");
	claptrap1.beRepaired(5);
	claptrap1.attack("Red target");
	claptrap1.takeDamage(20);
	claptrap1.attack("Red target");
	claptrap1.takeDamage(200);

	std::cout << "number 2\n";
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");
	claptrap2.attack("Green target");
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");
	claptrap2.attack("Green target");
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");
	claptrap2.attack("Green target");
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");	// No energy left from this point
	claptrap2.takeDamage(10);
	claptrap2.beRepaired(20);
	claptrap2.takeDamage(10);
	std::cout << "number 4\n";
	claptrap4.attack("Blue target");	// No energy left from this point
	claptrap4.takeDamage(5);
	claptrap4.beRepaired(20);
	claptrap4.takeDamage(10);
    // ClapTrap a("Harry");
    // ClapTrap b("Voldemort");

    // a.attack("Voldemort");
    // a.attack("Voldemort");

    // b.takeDamage(5);
    // b.beRepaired(1);
    return 0;
}