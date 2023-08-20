/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:07:41 by renstein          #+#    #+#             */
/*   Updated: 2023/08/20 20:50:04 by renstein         ###   ########.fr       */
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
    ~Fixed();

    Fixed& operator=(const Fixed &copy);// A copy assignment operator overload
    
    bool operator>(const Fixed &f);
    bool operator<(const Fixed &f);
    bool operator>=(const Fixed &f);
    bool operator<=(const Fixed &f);
    bool operator==(const Fixed &f);
    bool operator!=(const Fixed &f);

    Fixed operator+(const Fixed &f);
    Fixed operator-(const Fixed &f);
    Fixed operator*(const Fixed &f);
    Fixed operator/(const Fixed &f);

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    float toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits( void ) const;
    void setRawBits( int const raw);

    static 			Fixed & min(Fixed & float1, Fixed & float2);
	const static 	Fixed & min(Fixed const & float1, Fixed const & float2);
	static			Fixed & max(Fixed & float1, Fixed & float2);
	const static	Fixed & max(Fixed const & float1, Fixed const & float2);
};

    std::ostream & operator <<(std::ostream &, const Fixed &);

#endif