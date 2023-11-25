/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:04:24 by renstein          #+#    #+#             */
/*   Updated: 2023/11/25 17:48:35 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 2;
	::swap( a, b );
	std::cout <<"swap result " << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min value "<< "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max value "<< "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout <<"swap result " << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min value "<< "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max value " <<  "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;

}

// class Awesome
// {
// 	public:
// 		Awesome (void): _n(0) {}
// 		Awesome (int n): _n(n) {}
// 		Awesome & operator=(Awesome & a) { _n = a._n; return *this; }
// 		bool operator==( Awesome const & rhs) const { return (this->_n == rhs._n);}
// 		bool operator!=( Awesome const & rhs) const{ return (this->_n != rhs._n);}
// 		bool operator>( Awesome const & rhs) const { return (this->_n > rhs._n);}
// 		bool operator<( Awesome const & rhs) const { return (this->_n < rhs._n); }
// 		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// 		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// 		int get_n() const { return _n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<(std::ostream & o, const Awesome & a) { o << a.get_n(); return o; }

// int main(void)
// {
// 	Awesome a(2), b(4);
// 	swap(a, b);
// 	std::cout <<"swap result " << a << " and " << b << std::endl;
// 	std::cout << "max value " << max(a, b) << std::endl ;
// 	std::cout << "min value " << min(a, b) << std::endl;

// 	return (0);
// }
