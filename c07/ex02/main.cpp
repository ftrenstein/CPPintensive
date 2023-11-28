/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:04:24 by renstein          #+#    #+#             */
/*   Updated: 2023/11/28 19:57:23 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
	std::cout << "<----------empty test--------->" << std::endl;
	Array<int> empty;
	std::cout << empty.size() << std::endl;

	std::cout << "<----------copy test---------->" << std::endl;
	Array<int> original(2);
	for (int i = 0; i < 2; i++)
	{
		original[i] = i + 1;
		std::cout << "original - "<< original[i] << std::endl;
	}
	Array<int>copy(original);
	for (int i = 0; i < 2; i++)
		std::cout << "copy - "<< copy[i] << std::endl;
	std::cout << "<---------access test--------->" << std::endl;
	try
	{
		const Array<float> f(4);
		f[0] = 42.42f;
		for (int i = 0; i < 5; i++)
			std::cout << "Index: " << i << "; Value: " << f[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
