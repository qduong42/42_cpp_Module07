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

// int main(void)
// {
// 	int arr[] = {3, 5, 7, 9, 11, 13 };
// 	char ar[] = "hello";
// 	std::cout << "The given int array is:\n";
// 	iter(arr, 6, &print);
// 	iter(arr, 6, &add);
// 	std::cout << "The int array after add is:\n";
// 	iter(arr, 6, &print);
// 	std::cout << "Char arr before add:\n";
// 	std::cout << ar << std::endl;
// 	iter(ar, 5, &add);
// 	std::cout << "Char arr after add:\n";
// 	std::cout << ar << std::endl;
// 	return 0;
// }

class Awesome
{
public:  
	Awesome( void ) : _n( 42 ) { return; } int get( void ) const {return this->_n;}
	private: int _n;
};
	std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get();return o; }
	template< typename T >
	void print( T const & x ) { std::cout << x << std::endl; return; }

	int main()
	{
		int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;  
	}
