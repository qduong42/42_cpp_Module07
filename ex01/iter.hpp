#ifndef ITER_H
#define ITER_H
#include <stdlib.h>

template <typename T>
void iter(T *a, size_t l, void (*func)(T& t))
{
	for(size_t i = 0; i < l; i++)
		(*func)(a[i]);
}

template <typename T>
void print(T t)
{
	std::cout << /* typeid(myType) */ t << std::endl;
	return ;
}

template <typename Z>
void add(Z& z)
{
	z = z + 5;
}

#endif