/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:37:02 by renstein          #+#    #+#             */
/*   Updated: 2023/06/30 19:27:14 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string a;
	int count = 1;
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		while (argv[count])
		{
			a = argv[count];
			for (size_t i = 0; i < a.length(); i++)
			{
				a[i] = toupper(a[i]);
			}
			std::cout << a;
			count++;
		}
		std::cout << std::endl;	
	}
	
	return (0);
}