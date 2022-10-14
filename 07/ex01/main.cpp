#include "iter.hpp"
#include <iostream>

void print_int(int n)
{
	std::cout << n << std::endl;
}
template<class T>void print_that(T t)
{
	std::cout << t << std::endl;
}


int main()
{
	std::cout << "Standard Test" << std::endl;
	{
		int a [5] = { 16, 2, 77, 40, 12071 };
		::iter(a, 5, print_int);
	}
	std::cout << std::endl;
	std::cout << "Template function test" << std::endl;
	{
		int a [5] = { 16, 2, 77, 40, 12071 };
		::iter(a, 5, print_that);
	}
	return (0);
}