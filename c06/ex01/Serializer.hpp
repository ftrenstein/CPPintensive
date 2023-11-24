/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:14:54 by renstein          #+#    #+#             */
/*   Updated: 2023/11/24 13:17:03 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>

struct Data
{
	int	data;
	Data(int d) : data(d) {}
};

class Serializer
{
	public:
		static uintptr_t serialize(Data * ptr);
		static Data * deserialize(uintptr_t raw);
	private:
		Serializer(void);
		Serializer(Serializer const & other);
		~Serializer(void);

		Serializer & operator=(Serializer const & rhs);
};
#endif