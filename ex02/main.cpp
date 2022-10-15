#include "Array.hpp"
// #include <typeinfo>
// How to create const instance of template class or object class in general?
// has to be done in the init list
int main() 
{	
	std::cout << "Empty constructor test" << std::endl;
	Array<int> num;
	std::cout << "num.size(): " << num.size() << std::endl;
	std::cout << "size n constructor test" << std::endl;
	const Array<int> str(5);
	std::cout << "str.size(): " << str.size() << std::endl;
	// std::cout << "myint has type: " << typeid(num).name() << std::endl;
	try{
		for (int i = 0;i <= 5; i++)
		{
			std::cout << "This is: " << str[i] << std::endl;
		}
	}
	catch(std::out_of_range &e)
	{
		std::cout << "Exception:===" << e.what() << "=== caught" << std::endl;
	}
}