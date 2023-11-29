/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:54:05 by renstein          #+#    #+#             */
/*   Updated: 2023/11/29 13:24:17 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() :_N(0) {}


Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& copy)
{
    *this = copy;
}

Span::~Span() {}

Span &Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        this->_N = rhs._N;
        this->vct = rhs.vct;
    }
    return *this;
}

///////////////////////////////////////////////


void Span::addNumber(int value)
{
    if(vct.size() >= _N)
        throw std::range_error("storage is full");
    vct.push_back(value);
}

int Span::longestSpan(void)
{
	if (vct.size() < 2)
		throw std::logic_error("not enough elements");
	std::vector<int>::iterator minIt;
	std::vector<int>::iterator maxIt;

	minIt = std::min_element(vct.begin(), vct.end());
	maxIt = std::max_element(vct.begin(), vct.end());
	return (*maxIt - *minIt);
}

int Span::shortestSpan(void)
{
	if (vct.size() < 2)
		throw std::logic_error("not enough elements");
	std::sort(vct.begin(), vct.end());
	int min = vct[1] - vct[0];
	int tmp;
	for (unsigned int i = 2; i < vct.size(); i++)
	{
		tmp = vct[i] - vct[i - 1];
		if (tmp < min)
			min = tmp;
	}
	return min;
}


void Span::addNumbers(std::vector<int>::const_iterator it,
					std::vector<int>::const_iterator ite)
{
	vct.insert(vct.end(), it, ite);
	if (vct.size() > _N)
		throw std::range_error("error storage is full");
}


static void displayValue(int const & i)
{
	std::cout << i << " ";
}

void Span::display(void)
{
	std::for_each(vct.begin(), vct.end(), displayValue);
	std::cout << std::endl;
}
