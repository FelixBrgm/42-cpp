#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>
#include <deque>

class Pmerge
{
	private:
		std::vector<int> vec;
		std::deque<int> que;

	public:
		Pmerge(std::vector<int> numbers);
		~Pmerge();
		void sort();

};

#endif
