/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:08:36 by renstein          #+#    #+#             */
/*   Updated: 2023/08/31 19:01:37 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(); //A default constructor that initializes the fixed-point number value to 0.
        FragTrap(const FragTrap &f); //A copy constructor
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap &copy);

        virtual void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif