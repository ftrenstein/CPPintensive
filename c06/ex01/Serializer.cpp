/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:14:51 by renstein          #+#    #+#             */
/*   Updated: 2023/11/24 13:18:53 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::Serializer(Serializer const & other)
{
	*this = other;
}

Serializer::~Serializer(void) {}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	(void)rhs;
	return *this;
}

uintptr_t Serializer::serialize(Data * ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}