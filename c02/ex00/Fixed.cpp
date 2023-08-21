/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:04:19 by renstein          #+#    #+#             */
/*   Updated: 2023/08/20 20:45:38 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called "  << std::endl;
    this->n = 0;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called " << std::endl;
    *this = f;
}

Fixed &Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called "  << std::endl;
    if (this == &copy)
        return *this;
    n = copy.getRawBits();
    return *this;
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
