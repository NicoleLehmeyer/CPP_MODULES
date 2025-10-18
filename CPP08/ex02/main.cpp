#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Pushed: 5, 17" << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Top element: " << mstack.top() << std::endl << std::endl;

	mstack.pop();
	std::cout << "Top element popped." << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Top element: " << mstack.top() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Pushed: 3, 5, 737, 0" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Iterator at begin(): " << *it << std::endl;
	std::cout << "Iterator at end(): " << *ite << std::endl;

	std::cout << "Iterating through stack from begin to end:" << std::endl;
	while (it != ite)
	{
		std::cout <<  *it << std::endl;
		++it;
	}
	std::stack<int>s(mstack); //Copy mstack to s
	assert(s.size() == mstack.size());
	assert(s.top() == mstack.top());

	// mstack.push(0);
	// assert(s.size() == mstack.size()); //Assertion error

	return 0;
}