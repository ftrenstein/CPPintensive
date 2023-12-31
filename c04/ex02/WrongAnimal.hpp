/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:32 by renstein          #+#    #+#             */
/*   Updated: 2023/09/10 11:57:09 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal &operator=(WrongAnimal const &copy);

		void makeSound() const;
		std::string getType() const;
};

#endif