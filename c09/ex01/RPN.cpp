
#include "RPN.hpp"

RPN::RPN(void) : _result(0) {}

RPN::RPN(RPN const & other) { *this = other; }

RPN::~RPN(void) {}

RPN & RPN::operator=(RPN const & rhs)
{
	if (this != &rhs)
	{
		this->_stack = rhs._stack;
		this->_result = rhs._result;
	}
	return *this;
}

bool RPN::isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void RPN::calculate(int num1, int num2, char oper)
{
	switch (oper)
	{
		case '+':
			_stack.push(num1 + num2);
			break;
		case '-':
			_stack.push(num1 - num2);
			break;
		case '*':
			_stack.push(num1 * num2);
			break;
		case '/':
			if (num2 == 0)
				throw std::runtime_error("Error: division by zero");
			_stack.push(num1 / num2);
			break;
	}
}

int RPN::getResult(void) const
{
	return this->_result;
}

void RPN::reversePolishNotation(std::string const & expression)
{
	std::string token;

	for (size_t i = 0; i < expression.length(); i++)
	{
		char c = expression[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
			token += c;
		else if (isOperator(c))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: insufficient operands");
			int num2 = _stack.top();
			_stack.pop();
			int num1 = _stack.top();
			_stack.pop();
			calculate(num1, num2, c);
		}
		else
			throw std::runtime_error("Error: invalid token");
		if (!token.empty())
		{
			_stack.push(atoi(token.c_str()));
			token.clear();
		}
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error: too many operands");
	_result = _stack.top();
	_stack.pop();
}


std::ostream &	operator<<(std::ostream & os, RPN const & i)
{
	os << i.getResult();
	return os;
}
