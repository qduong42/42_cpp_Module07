/**
 * @file whatever.hpp
 * @author your name (you@domain.com)
 * @brief CPP-07 Function templates ex00
 * Must be defined in header files
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Function templates: swap: Swaps the values of two given arguments. 
 * Does not return anything
 * 
 */

/**
 * Function templates: min: compares the two values passed in its arguments and returns the smallest
 * one. If the two of them are equal, then it returns the second one.
 * 
 */

template <typename myType>
myType min(myType a, myType b)
{
	return (a<b?a:b);
}

/**
 * Function templates: max: compares the two values passed in its arguments and returns the biggest
 * one. If the two of them are equal, then it returns the second one.
 */
template <class myType>
myType max(myType a, myType b)
{
	return (a>b?a:b); // if a > b, return a, otherwise b
}

template <typename myType>
void swap(myType &a, myType&b)
{
	myType temp;
	temp = a;
	a = b;
	b = temp;
}
