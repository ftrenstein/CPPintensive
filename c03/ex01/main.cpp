
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
#include "ScavTrap.hpp"


int main()
{

	ScavTrap	S1("WALL-E");
	ScavTrap	S2("EVA");
	ScavTrap	S3("crockroach");
	ScavTrap	S4(S1);
	ClapTrap	S5("mami");
	S3 = S1;

	S1.attack("stupid robots");
	S2.attack("FAT");
	S3.attack("stupid robots");
	S4.attack("trash");
	S1.guardGate();
	S1.beRepaired(10);
	S1.takeDamage(100);

	S5.attack("stupid robots");
	S5.takeDamage(90);
	S5.beRepaired(10);
	// S5.guardGate(); //not possible

    return 0;
}