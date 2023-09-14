
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

#define NUM_AN  9

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		Animal	*animals[NUM_AN];
		int 	i;

		std::cout << ">>> CREATING ANIMALS <<<" << std::endl;
		std::cout << ">> CREATING CATS <<" << std::endl;
		for (i = 0; i < NUM_AN/2; i++)
		{
			std::cout << "Animal n°" << i << ":" << std::endl;
				animals[i] = new Cat();
			std::cout << "--------------" << std::endl;
		}
		std::cout << ">> CREATING DOGS <<" << std::endl;

		for (; i < NUM_AN; i++)
		{
			std::cout << "Animal n°" << i << ":" << std::endl;
			animals[i] = new Dog();
			std::cout << "--------------" << std::endl;
		}
		for (i = 0; i < NUM_AN; i++)
		{
			std::cout << "\'animal " << i << "\' type is: " << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
		}

		std::cout << ">>> DESTROYING ANIMALS <<<" << std::endl;
		for (i = 0; i < NUM_AN; i++)
		{
			std::cout << "Animal n°" << i << ":" << std::endl;
			delete (animals[i]);
			std::cout << "--------------" << std::endl;
		}
	}
	{
		Cat		cat("sleep");
		Cat		copycat;

		copycat = cat;
		cat.printIdeas();
		std::cout << "-------------" << std::endl;
		copycat.printIdeas();
	}

	// {
	// 	Dog		dog("sleep");

	// 	Dog copydog(dog);
	// 	dog.printIdeas();
	// 	std::cout << "-------------" << std::endl;
	// 	copydog.printIdeas();
	// }
	return 0;
}