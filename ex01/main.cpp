#include <string>
#include <iostream>
#include "iter.hpp"

// typedef void (*t_func)(T& t);
// typedef void (*t_f)(char& n);
// typedef void (*t_a)(int& n);
// t_func func = &print;
// t_f ad = &add;

// template void print<int>(int);
// void print(int x ) { std::cout << x << std::endl; return; }
// void add(char& x) {x = x + 1;}
// can not put array in reference. Even though reference could be const ptr, it doesnt work when cycling
//through array

int main(void)
{
	int arr[] = {564, 4572, 459, 12, 78, 90 };
	char ar[] = "hello";
	std::cout << "The given int array is:\n";
	iter(arr, 6, &print);
	std::cout << "The int array before add is:\n";
	iter(arr, 6, &print);
	iter(arr, 6, &add);
	std::cout << "The int array after add is:\n";
	iter(arr, 6, &print);
	std::cout << "The given char array is:\n";
	iter(ar, 5, &print);
	std::cout << "Char arr before add:\n";
	std::cout << ar << std::endl;
	iter(ar, 5, &add);
	std::cout << "Char arr after add:\n";
	std::cout << ar << std::endl;
	return 0;
}
