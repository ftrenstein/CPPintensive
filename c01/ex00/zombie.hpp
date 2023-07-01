/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:00:13 by renstein          #+#    #+#             */
/*   Updated: 2023/07/01 16:13:45 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    std::string _name = "Foo";

    public:
    void announce(void);
    // void SetName(std::string name);
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
};

#endif