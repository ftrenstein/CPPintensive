/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renstein <renstein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:30:10 by renstein          #+#    #+#             */
/*   Updated: 2023/11/23 19:40:52 by renstein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cmath>
# include <iomanip>

# define PLUS_INF	(1.0f/0.0f)
# define MINUS_INF	(-1.0f/0.0f)
# define NANF		(0.0f/0.0f)

class ScalarConverter
{
	public:
		static void convert(std::string const & literal);
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & other);
		ScalarConverter & operator=(ScalarConverter const & rhs);
		~ScalarConverter(void);
};

#endif
