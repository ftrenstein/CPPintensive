/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:13:20 by renstein          #+#    #+#             */
/*   Updated: 2023/11/29 13:03:37 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const & other);
		~Span(void);

		Span & operator=(Span const & rhs);

    	void addNumber(int value);
		void addNumbers(std::vector<int>::const_iterator it,
						std::vector<int>::const_iterator ite);
		int shortestSpan(void);
		int longestSpan(void);

		void fillVector(void);
		void display(void);

	private:
		unsigned int _N;
        std::vector<int> vct;
        Span(void);
};


#endif