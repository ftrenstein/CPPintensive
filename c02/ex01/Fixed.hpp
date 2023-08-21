/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:07:41 by renstein          #+#    #+#             */
/*   Updated: 2023/08/20 20:47:09 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int n;
    static const int _fractional_bits = 8;

public:
    Fixed(); //A default constructor that initializes the fixed-point number value to 0.

    Fixed(const Fixed &f); //A copy constructor
    Fixed(const int v);
    Fixed(const float value);
    ~Fixed();//A destructor

    Fixed& operator=(const Fixed &copy);// A copy assignment operator overload
    float toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits( void ) const;
    void setRawBits( int const raw);
};

    std::ostream & operator <<(std::ostream &, const Fixed &);

#endif