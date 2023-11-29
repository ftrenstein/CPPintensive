/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:13:20 by renstein          #+#    #+#             */
/*   Updated: 2023/11/29 12:35:16 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(T  const & cont, int value)
{
    typename T::const_iterator it;
    it = std::find(cont.begin(), cont.end(), value);
    if( it == cont.end())
        throw std::out_of_range("element not found");
    return it;
}

#endif
