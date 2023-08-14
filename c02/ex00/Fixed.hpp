/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:07:41 by renstein          #+#    #+#             */
/*   Updated: 2023/08/14 17:13:27 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
    int n;
    static const int _fractional_bits = 8;

public:
    Fixed(); //A default constructor that initializes the fixed-point number value to 0.
    ~Fixed();//A destructor
    Fixed(const Fixed &f); //A copy constructor
    void operator=(const Fixed &f);// A copy assignment operator overload


    int getRawBits( void ) const;
    void setRawBits( int const raw);
};

#endif