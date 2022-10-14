#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <class T>
class Array
{
	private:
		T *a;
		int size_;
	public:
		Array()
		{
			size_ = 0;
			a = new T[0];
		};
		Array(Array &cpy)
		{
			size_ = 0;
			*this = cpy;
		}
		Array(unsigned int n)
		{
			size_ = n;
			a = new T[n];
		}

		~Array() { delete[] a; }

		Array& operator= (Array &cpy)
		{
			if (size_)
				delete[] a;

			size_ = cpy.size();
			a = new T[size_];
			for (int i = 0; i < size_; i++)
				a[i] = int(cpy[i]);
			return (*this);
		}

		T&	operator[] (int i)
		{
			if (i < 0 || i >= size_)
				throw std::exception();
			return (a[i]);
		}
		int	size(void)
		{
			return size_;
		}
};

#endif