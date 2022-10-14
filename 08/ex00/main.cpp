#include "easyfind.hpp"
# include <list>

int main()
{
	std::list<int> l;
	l.push_back(0);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	std::list<int>::iterator it;

	std::cout << "Printing values" << std::endl;
	{
		{
			for (it = l.begin(); it != l.end(); ++it)
				std::cout << *it << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "Finding one" << std::endl;

	{
		try
		{
			it = easyfind(l, 0);
			std::cout << "Found " << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout <<  std::endl;
	std::cout << "Not finding one" << std::endl;
	{
		try
		{
			it = easyfind(l, -1);
			std::cout << "Found " << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return (0);
}