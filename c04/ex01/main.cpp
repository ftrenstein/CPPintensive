
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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define Num_an = 10

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal	*animals[Num_an];

	std::cout << ">>> CREATING ANIMALS <<<" << std::endl;
	std::cout << ">> CREATING CATS <<" << std::endl;
	for (int i = 0; i < Num_an/2, i++)
	{
		std::cout << "Animal n°" << i << ":" << std::endl;
			animals[i] = new Cat();
		std::cout << "--------------" << std::endl;
	}
	std::cout << ">> CREATING DOGS <<" << std::endl;
	for (; i < NB_ANIMALS; i++)
	{
		std::cout << "Animal n°" << i << ":" << std::endl;
		animals[i] = new Dog();
		std::cout << "--------------" << std::endl;
	}


	return 0;
}