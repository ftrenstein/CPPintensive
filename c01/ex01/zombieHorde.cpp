/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:53:06 by renstein          #+#    #+#             */
/*   Updated: 2023/07/02 18:58:01 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        z[i].SetName(name);
        std::cout << i << "| ";
        z[i].announce();
    }
    return(z);
}