#include "whatever.hpp"
#include <iostream>

// int main()
// {
// 	int i = 5;
// 	int y = 10;
// 	std::cout << max<int>(y, i) << std::endl;
// 	std::cout << min<int>(y, i) << std::endl;
// 	swap<int>(y, i);
// 	std::cout << "y: " << y << " i: " << i << std::endl;
// }

class Awesome  
{ 
public:  
	Awesome(void) : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n);}
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n);}
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return(this->_n >= rhs._n);}
	bool operator<=( Awesome const & rhs ) const {return (this->_n <= rhs._n);}
	int get_n() const {return _n;}
private: 
	int _n; 
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return 
o; }

int main(void)  
{ 
Awesome a(2), b(4); swap(a,b);  

std::cout << a << " " << b << std::endl; 
std::cout << max(a, b) << std::endl; 
std::cout << min(a, b) << std::endl; 
return (0);  
}
