/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:04:24 by renstein          #+#    #+#             */
/*   Updated: 2023/11/24 14:19:40 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "functions.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		Base * object = generate();
		identify(object);
		delete object;
	}
	std::cout << std::endl;

	Base * object = generate();
	identify(*object);
	delete object;

	return (0);
}
