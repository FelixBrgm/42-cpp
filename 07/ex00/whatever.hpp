#ifndef WHATEVER_H
#define WHATEVER_H

template <class T>
T max(T x, T y) {
	if (x > y)
		return (x);
	else
		return (y);
}
template <class T>
T min(T x, T y) {
	if (x < y)
		return (x);
	else
		return (y);
}
template <class T> void swap(T &x, T &y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

#endif