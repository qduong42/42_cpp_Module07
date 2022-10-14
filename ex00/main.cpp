#include "whatever.hpp"
#include <iostream>

int main()
{
	int i = 5;
	int y = 10;
	std::cout << max<int>(y, i) << std::endl;
	std::cout << min<int>(y, i) << std::endl;
	swap<int>(y, i);
	std::cout << "y: " << y << " i: " << i << std::endl;
}
