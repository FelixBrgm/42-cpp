#ifndef ITER_H
#define ITER_H

template<class T>void iter(T *p, int n, void(f)(T t))
{
	if(!p || n < 0)
		return ;
	
	for (int i = 0; i < n && p[i]; i++)
		f(p[i]);
}

#endif