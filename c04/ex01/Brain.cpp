/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:24:32 by renstein          #+#    #+#             */
/*   Updated: 2023/08/23 17:24:13 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//______________________________________________________________
Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "";
    std::cout << "Brain: Created a new object with default constructor"  << std::endl;
}


Brain::Brain(const Brain& copy)
{
    std::cout << "Brain: Created a new object named -  with copy constructor" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain& copy)
{
    if (this == &copy)
        return *this;
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
    std::cout << "Brain: Copied  with assignment operator" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor called "  << std::endl;
}

//__________________________________________________________________________

