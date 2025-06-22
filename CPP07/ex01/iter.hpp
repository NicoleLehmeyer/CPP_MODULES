

template <typename type> void print(type item)
{
	std::cout << item << std::endl;
}

template <typename type> void iter(type *arr, int arr_length, void (*f_ptr)(type const&))
{
	for (int i = 0; i < arr_length; i++)
	{
		f_ptr(arr[i]);
	}
}

// Make a function template 'iter' that takes 3 parameters and returns nothing

// PARAMETERS:
// 1. Address of array
// 2. Length of array
// 3. Function to be called on every element of the array

// Iter must work on any type of array.
// Third parameter can be an instantiated function template