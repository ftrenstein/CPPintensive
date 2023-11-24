/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:04:24 by renstein          #+#    #+#             */
/*   Updated: 2023/11/24 13:05:26 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScalarConverter.hpp"

int main (int argc ,char **argv)
{
	if (argc != 2)
	{
		std::cerr << "USAGE:  ./converter [literal_to_convert]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);

	return (0);
}
