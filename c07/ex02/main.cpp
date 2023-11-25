/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:04:24 by renstein          #+#    #+#             */
/*   Updated: 2023/11/25 18:09:27 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"


template <typename T>
void printElement(const T& element) {
    std::cout << element << "\n";
}

int main(void)
{
	int arr[4] = {1, 2, 3, 4};
	iter(arr, 4, printElement);

	std::cout << std::endl;

	std::string seasons[4] = {"Winter", "Spring", "Summer", "Autumn"};
	iter(seasons, 4, printElement);

	return (0);
}