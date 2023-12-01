
#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h>

class RPN
{
	public:
		RPN(void);
		RPN(RPN const & other);
		~RPN(void);

		RPN & operator=(RPN const & rhs);

		void reversePolishNotation(std::string const & expression);
		bool isOperator(char c);
		void calculate(int num1, int num2, char oper);

		int getResult(void) const;

	private:
		std::stack<int>_stack;
		int _result;
};

std::ostream &	operator<<(std::ostream & os, RPN const & i);

#endif
