#ifndef ARRAY_H
# define ARRAY_H
#include <cstddef>
#include <iostream>

template <typename T>
class Array{

 public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array& obj);
	Array& operator=(const Array& obj);
	unsigned int size() const;
	T& operator[] (const unsigned int index);

private:
	unsigned int _size;
    T*			 _array;
};

/**
 * Construct a new Array< T>:: Array object
 * size initialized to 0
 * array initialized to NULL
 * space allocated for T[0] bytes
 * @tparam
 */
template <typename T>
Array<T>::Array() : _size(0), _array(NULL)
{
	this->_array = new T[0];
	std::cout << "Array empty constructor called!" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
	std::cout << "Array destructor called!" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_array[i] = 0;
	std::cout << "Array constructor of size n= " << this->size() << " is called!" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &obj): _size(obj.size())
{
	std::cout << "The (deep) copy constructor for the class template Array is called!" << std::endl;
	this->_array = new T[obj.size()];
	for (unsigned int i = 0; i < obj.size(); i++)
		this->_array[i] = obj._array[i];
}

template <typename T>
Array<T> &Array<T>::operator= (const Array &obj)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &obj)
	{
		delete [] this->_array;
		this->_size = obj.size();
		this->_array = new T[obj.size()];
		for (unsigned int i = 0; i < obj.size(); i++)
			this->_array[i] = obj._array[i];
	}
	return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return this->_size;
}

template <typename T>
T& Array<T>::operator[] (const unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Only index 0 to (n-1) index allowed. Out of Bounds!");
	else
		return this->_array[index];
}

#endif
