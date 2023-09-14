/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:24:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/23 17:24:13 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Defoult constructor called." << std::endl;
	_type = "unknown type";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Denstructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: Copy constructor called." << std::endl;
	this->_type = copy._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal: operator= called." << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: I'm WrongAnimal." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}