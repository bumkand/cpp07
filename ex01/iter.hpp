#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *x, size_t y, void (*f)(T &))
{
	if (!x || !f)
		return ;
	for (size_t i = 0; i < y; i++)
	{
		f(x[i]);
	}
}

template <typename T> void iter(T *x, size_t y, void (*f)(T const &))
{
	if (!x || !f)
		return ;
	for (size_t i = 0; i < y; i++)
	{
		f(x[i]);
	}
}

//template <typename T, typename F> void iter(T *x, size_t y, F f)
//{
//	if (!x)
//		return ;
//	for (size_t i = 0; i < y; i++)
//		f(x[i]);
//}

template <typename U> void	print(U const &x)
{
	std::cout << x << std::endl;
}


#endif