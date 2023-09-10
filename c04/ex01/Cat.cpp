/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:28:19 by renstein          #+#    #+#             */
/*   Updated: 2023/09/10 12:48:34 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Defoult constructor called" << std::endl;
	_type = "type Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	// if (_brain != nullptr)
		delete _brain;
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: operator= called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;
	// if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miaw Miaw" << std::endl;
}