/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:04:19 by renstein          #+#    #+#             */
/*   Updated: 2023/08/14 19:57:43 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called "  << std::endl;
    this->n = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called "  << std::endl;
    this->n = value << _fractional_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called "  << std::endl;
    value  *= pow(2,_fractional_bits);
}

Fixed::Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called " << std::endl;
    *this = f;
}

void Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called "  << std::endl;
    n = f.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called "  << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called "  << std::endl;
    return (this->n << this->_fractional_bits);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called "  << std::endl;
    this->n = raw >> this->_fractional_bits;
}

// float toFloat( void ) const
// {
//     return(getRawBits()
// }

// int toInt( void ) const
// {

// }
