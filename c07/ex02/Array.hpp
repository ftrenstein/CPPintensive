/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:19:57 by renstein          #+#    #+#             */
/*   Updated: 2023/11/28 20:02:15 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const & other);
		~Array(void);

		Array<T> & operator=(Array<T> const & rhs);
		T & operator[](unsigned int const index) const;

		unsigned int   size(void) const;
	private:
		T * arr;
		unsigned int _n;
};

# include "Array.tpp"

#endif
