/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:28:19 by renstein          #+#    #+#             */
/*   Updated: 2023/09/14 12:19:09 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Defoult constructor called" << std::endl;
	_type = "type Cat";
	_brain = new Brain();
}

Cat::Cat(const std::string idea)
{
	std::cout << "Cat: String constructor called" << std::endl;
	_type = "type Cat";
	_brain = new Brain(idea);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal()
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: operator = called" << std::endl;
	if(this == &copy)
		return *this;
	this->_type = copy._type;

	delete this->_brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: Miaw Miaw" << std::endl;
}

void	Cat::printIdeas()const
{
    this->_brain->printIdeas();
}