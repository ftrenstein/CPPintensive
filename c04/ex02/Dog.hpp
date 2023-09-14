/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:28:15 by renstein          #+#    #+#             */
/*   Updated: 2023/09/14 12:27:26 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(std::string name);

		
		~Dog();
		Dog(Dog const &copy);
		Dog &operator=(Dog const &copy);

		void makeSound() const;
		void	printIdeas()const;

};

#endif