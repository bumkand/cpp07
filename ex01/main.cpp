#include "iter.hpp"

int	main(void)
{
	int			arr[] = {1, 2, 3, 4, 5, 6, 7};
	std::string	str[] = {"Hello World"};
	float		flo[] = {1.1f, 2.8f, 55.88f, 221.0202f};

	::iter(arr, 7, print);
	::iter(str, 1, print);
	::iter(flo, 4, print);

	//::iter(arr, 7, print<int>);
	//::iter(str, 1, print<std::string>);
	//::iter(flo, 4, print<float>);

	return 0;
}