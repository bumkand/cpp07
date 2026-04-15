#include "iter.hpp"

int	main(void)
{
	int			arr[] = {1, 2, 3, 4, 5, 6, 7};
	std::string	str = "Hello World";

	::iter(arr, 7, ::print<int>);

	::iter(&str[0], 12, print<std::string>);

	return 0;
}