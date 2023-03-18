#include "RPN.hpp"
#include <iostream>

int main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "Error\n" << std::endl;
		return (1);
	}
	RPN rpn = RPN();
	try
	{
		std::cout << rpn.calculate(argv[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}