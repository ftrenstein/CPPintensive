/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:19:57 by renstein          #+#    #+#             */
/*   Updated: 2023/11/25 18:20:13 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP


# include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T *elements;
    unsigned int arraySize;

public:
    Array() : elements(nullptr), arraySize(0){}

    Array(unsigned int n): elements()
}



#endif
