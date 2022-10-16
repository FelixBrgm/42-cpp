#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <deque>
# include <stack>

template < class T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

		MutantStack<T>():std::stack<T>() {}
		MutantStack<T>(MutantStack<T> const & src):std::stack<T>() {*this = src;}
		~MutantStack<T>() {}

		MutantStack<T> & operator=(const MutantStack<T> & other)
		{this->c = other.c; return *this;};

		iterator begin() {return (this->c.begin());};
		iterator end() {return (this->c.end());};
		reverse_iterator rbegin() {return (this->c.rbegin());};
		reverse_iterator rend() {return (this->c.rend());};
		const_iterator cbegin() {return (this->c.cbegin());};
		const_iterator cend() {return (this->c.cend());};
		const_reverse_iterator crbegin() {return (this->c.crbegin());};
		const_reverse_iterator crend() {return (this->c.crend());};
};

# endif