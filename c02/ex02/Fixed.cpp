/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:04:19 by renstein          #+#    #+#             */
/*   Updated: 2023/08/20 20:49:33 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

/*_______________Constructors and destructor_________________________*/

Fixed::Fixed()
{
    // std::cout << "Default constructor called "  << std::endl;
    this->n = 0;
}

Fixed::Fixed(int v)
{
    // std::cout << "Int constructor called "  << std::endl;
    this->n = v << _fractional_bits;
}

Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called "  << std::endl;
    this->n = roundf(value * pow(2,_fractional_bits));
}

Fixed::Fixed(const Fixed& copy)
{
    // std::cout << "Copy constructor called " << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed& copy)
{
    // std::cout << "Copy assignment operator called "  << std::endl;
    if (this == &copy)
        return *this;
    n = copy.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called "  << std::endl;
}

//________________________________________________________________



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

float Fixed::toFloat( void ) const
{
	return ((float)(this->n / pow(2, this->_fractional_bits)));
}

int Fixed::toInt( void ) const
{
    return (this->n>> this->_fractional_bits);
}


std::ostream & operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

/*___________________The 6 comparison operators_______________________________________*/

bool Fixed::operator>(const Fixed &f)
{
    if (n > f.n)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &f)
{
    if (n < f.n)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &f)
{
    if (n >= f.n)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &f)
{
    if (n <= f.n)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &f)
{
    if (n == f.n)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &f)
{
    if (n != f.n)
        return true;
    return false;
}
//_______________________________________________

Fixed Fixed::operator+(const Fixed &f)
{
    Fixed newFixed(this->toFloat() + f.toFloat());
    return newFixed; //create new object with constructor
}

Fixed Fixed::operator-(const Fixed &f)
{
    return Fixed(this->toFloat() - f.toFloat()); //create new object with constructor
}

Fixed Fixed::operator*(const Fixed &f)
{
    return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f)
{
    return Fixed(this->toFloat() / f.toFloat());
}

// Fixed Fixed::operator/(const Fixed &f)
// {
//     Fixed res;
//     int a, b;

//     a = n;
//     b = f.n;
//     float a1 = a / pow(2, val);
//     float b1 = b / pow(2, val);
//     a1 /= b1;
//     res = a1;
//     return res;
// }

//______________________________________________________

Fixed& Fixed::operator++()
{
    this->n++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp;
    temp.n = n;
    n += 1;
    return temp;
}


Fixed& Fixed::operator--()
{
    this->n--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp;
    temp.n = n;
    n -= 1;
    return temp;
}
//______________________________________________________________

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return(a);
    return(b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.n < b.n)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return(a);
    return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.n > b.n)
        return a;
    return b;
}

//______________________________________________________________________________