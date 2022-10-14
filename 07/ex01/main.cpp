#include "iter.hpp"
#include <iostream>

void print_int(int n)
{
	std::cout << n << std::endl;
}

int main()
{
	int a [5] = { 16, 2, 77, 40, 12071 };
	::iter(a, 5, print_int);
	return (0);
}