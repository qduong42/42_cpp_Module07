# CPP Module 07 Templates

-	Special functions operate generic types: Function template => Functionality adapted to more than 1 type or class.

## Template parameters.
- special kind param pass type as arg.

## Syntax:
- template <class identifer> function_declaration;
- template <typename identifier> function_declaration;

class/typename difference indistinct.

template <class myType>
myType max(myType a, myType b)
{
	return (a>b?a:b); // if a > b, return a, otherwise b
}

- Calling templates: max<type> (param);
- type replaces all myType

## Ex01