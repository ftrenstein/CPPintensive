
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

	ScavTrap	S1("S_WALL-E");
	FragTrap	S2("F_EVA");
	FragTrap	S3("F_crockroach");
	ClapTrap	S5("Cmami");


	S1.attack("stupid robots");
	S2.attack("FAT");
	S3.attack("stupid robots");

	S1.guardGate();
	S1.beRepaired(10);
	S1.takeDamage(100);

	S5.attack("stupid robots");
	S5.takeDamage(90);
	S5.beRepaired(10);

	S3.highFivesGuys();

    return 0;
}