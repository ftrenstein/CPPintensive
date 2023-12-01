
#include "RPN.hpp"
#include <iostream>

int main(int ac, char **av)
{
	RPN rpn;

	if (ac != 2)
		std::cerr << "Usage: " << av[0] << " <RPN expression>" << std::endl;
	else
	{
		try
		{
			rpn.reversePolishNotation(av[1]);
			std::cout << rpn << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
