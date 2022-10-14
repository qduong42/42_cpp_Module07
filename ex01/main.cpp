#include <string>
#include <iostream>
#include "iter.hpp"

typedef void (*t_func)(int n);
typedef void (*t_f)(char& n);

void print(int x ) { std::cout << x << std::endl; return; }
void add(char& x) {x = x + 1;}

int main(void)
{
	int arr[] = { 564, 4572, 459, 12, 78, 90 };
	char ar[] = "hello";
	t_func func = &print;
	t_f ad = &add;
	std::cout << "The given int array is:\n";
	iter(arr, 6, func);
	std::cout << "The given char array is:\n";
	iter(ar, 5, func);
	std::cout << "Char arr before iter:\n";
	std::cout << ar << std::endl;
	iter(ar, 5, ad);
	std::cout << "Char arr after iter:\n";
	std::cout << ar << std::endl;
	return 0;
}
