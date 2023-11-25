/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:19:57 by renstein          #+#    #+#             */
/*   Updated: 2023/11/25 18:09:00 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP


# include <iostream>

template <typename T>
void iter(T* array, size_t len, void (* func)(T const & t))
{
    for (size_t i = 0; i < len; ++i){
        func(array[i]);
    }
}



#endif
