#include "array.hpp"
#include <iostream>

int main()
{
	std::cout << "Empty Test" << std::endl;
	{
		Array<int> a(0);
		std::cout << "Size " << a.size()<< std::endl;
	}
	std::cout << std::endl;
	std::cout << "N Constructor" << std::endl;
	{
		Array<int> x(5);
		x[0] = 1;
		x[1] = 4;
		x[4] = -5;
		for (int i = 0; i < 5; i++)
			std::cout << x[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Copy constructor" << std::endl;
	{
		Array<int> x(1);
		x[0] = 1;
		Array<int> y(x);
		std::cout << "BEFORE" << std::endl;
		std::cout << "X: " << x[0] << std::endl;
		std::cout << "Y: " << y[0] << std::endl;
		y[0] = 2;
		std::cout << "AFTER" << std::endl;
		std::cout << "X: " << x[0] << std::endl;
		std::cout << "Y: " << y[0] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Exceptions out of bounds" << std::endl;
	{
		Array<int> a(1);
		try
		{
			std::cout << a[-1] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << '\n';
		}
	}
	return (0);
}