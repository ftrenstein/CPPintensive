/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:39:20 by renstein          #+#    #+#             */
/*   Updated: 2023/07/02 18:46:35 by renstein         ###   ########.fr       */
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
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void SetName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif