/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:28:15 by renstein          #+#    #+#             */
/*   Updated: 2023/09/14 13:22:32 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(std::string name);
		~Cat();
		Cat(Cat const &copy);
		Cat &operator=(Cat const &copy);
		
		
		void	printIdeas()const;

		void makeSound() const;
};

#endif