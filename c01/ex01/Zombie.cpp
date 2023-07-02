/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:37:00 by renstein          #+#    #+#             */
/*   Updated: 2023/07/02 18:47:42 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void Zombie::SetName(std::string name)
{
    _name =  name;
}

Zombie::Zombie()
{
    _name = "def";
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
}

void Zombie::announce(void)
{
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
