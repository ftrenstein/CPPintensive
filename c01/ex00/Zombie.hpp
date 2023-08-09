/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:00:13 by renstein          #+#    #+#             */
/*   Updated: 2023/07/02 17:24:15 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    std::string _name;

    public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};


void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif