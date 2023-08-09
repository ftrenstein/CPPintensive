/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:56:25 by renstein          #+#    #+#             */
/*   Updated: 2023/08/09 20:28:27 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	z("ty");
	z.announce();
	randomChump("foo");
	Zombie *v = newZombie("grey");
	v->announce();
	delete v;
}