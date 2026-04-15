#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename U> void iter(T *x, const int y, U function)
{
	for (int i = 0; i < y; i++)
	{
		function(x[i]);
	}
}

template <typename T> void	print(T x)
{
	std::cout << x;
}


#endif