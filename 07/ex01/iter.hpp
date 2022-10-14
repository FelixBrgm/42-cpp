#ifndef ITER_H
#define ITER_H

template<class T>void iter(T *p, int n, void(f)(const T &t))
{
	if(!p)
		return ;
	
	for (int i = 0; i < n; i++)
		f(p[i]);
}

#endif