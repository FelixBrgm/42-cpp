#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>

class NotFoundException: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found");
		}
};

template< typename T>
typename T::iterator easyfind(T &c, int i)
{
	typename T::iterator	it;
	it = find(c.begin(), c.end(), i);
	if (it == c.end())
		throw (NotFoundException());
	return (it);
}


#endif