
template <typename type> type max(type value1, type value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}

template <typename type> type min(type value1, type value2)
{
	if (value1 < value2)
		return value1;
	else
		return value2;
}

template <typename type> void swap(type& value1, type& value2)
{
	type temp = value1;
	value1 = value2;
	value2 = temp;
}

// Use templates

// swap: Swaps values of 2 given arguments
// min:  Returns smallest value, or if equal, the second one
// max:  Returns greatest value, or if equal, the second one.

//		Must work with any type of argument, as long as they are 
//		the same type and support all comparison operators