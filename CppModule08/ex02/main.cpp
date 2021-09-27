#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
 	std::list<int> list;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "value: " << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	MutantStack<int> tmp = mstack;
	MutantStack<int>::iterator it1 = tmp.begin();
	MutantStack<int>::iterator ite1 = tmp.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << "value: " << *it1 << " ";
		++it1;
	}
	std::cout << std::endl;

	std::cout << "-------------------------list--------------------" << std::endl;

	list.push_front(5);
	list.push_front(17);
	std::cout << list.front() << std::endl;
	list.pop_front();
	std::cout << list.size() << std::endl;
	list.push_front(3);
	list.push_front(5);
	list.push_front(737);
	//[...]
	list.push_front(0);
	std::list<int>::iterator it_list = list.begin();
	std::list<int>::iterator ite_list = list.end();
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << "value: " << *it_list << " ";
		++it_list;
	}
	std::cout << std::endl;
	return 0;
}
