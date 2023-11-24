/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:10:21 by renstein          #+#    #+#             */
/*   Updated: 2023/11/24 13:20:49 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"
#include <iostream>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "USAGE:  ./serializat [int_value]" << std::endl;
		return (1);
	}
	Data * data = new Data(atoi(av[1]));

	uintptr_t serialized = Serializer::serialize(data);

	Data * deserialized = Serializer::deserialize(serialized);

	if (deserialized == data)
		std::cout << "Serialization and deserialization completed successfully" << std::endl;

	std::cout << "Deserialized data value: " << deserialized->data << std::endl;

	delete data;

	return (0);
}
