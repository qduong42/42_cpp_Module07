#include "Array.hpp"
// #include <typeinfo>

int main() 
{	
	std::cout << "Empty constructor test" << std::endl;
	Array<int> num;
	std::cout << "num.size(): " << num.size() << std::endl;
	std::cout << "size n constructor test" << std::endl;
	Array<char> str(5);
	std::cout << "str.size(): " << str.size() << std::endl;
	// std::cout << "myint has type: " << typeid(num).name() << std::endl;
	try{
		std::cout << str[5];
	}
	catch(std::out_of_range &e)
	{
		std::cout << "Exception:===" << e.what() << "=== caught" << std::endl;
	}
	str[3] = 'a';
	std::cout << "str[3]:" << str[3] << std::endl;
}