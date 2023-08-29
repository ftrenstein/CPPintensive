
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
#include "FragTrap.hpp"



int main()
{

	ScavTrap	S1("WALL-E");
	FragTrap	S2("fEVA");
	FragTrap	S3("Fcrockroach");
	FragTrap	S4;
	ClapTrap	S5("mami");


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

	S3.highFivesGuys();
	// S5.guardGate(); //not possible

    return 0;
}