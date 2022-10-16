 # include "MutantStack.hpp"
 # include <vector>

 int main( void )
 {
	{
		std::cout << std::endl << ">>>>>>>>>>>>>> FROM SUBJECT <<<<<<<<<<<<<<<<" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << std::endl << ">>>>>>>>>>> COMPARE WITH VECTOR <<<<<<<<<<<<" << std::endl;
		std::vector<int> vstack;

		vstack.push_back(5);
		vstack.push_back(17);
		std::cout << vstack[vstack.size() - 1] << std::endl;
		vstack.pop_back();
		std::cout << vstack.size() << std::endl;
		vstack.push_back(3);
		vstack.push_back(5);
		vstack.push_back(737);
		vstack.push_back(0);
		std::vector<int>::iterator it = vstack.begin();
		std::vector<int>::iterator ite = vstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
	}
	{
		std::cout << std::endl << ">>>>>>>>>>> ANOTHER TEST <<<<<<<<<<<<" << std::endl;
		MutantStack<double> list;
		list.push(89.09);
		list.push(1.42);
		list.push(42.51);
		list.push(10.40);

		std::cout << "List-size: " << list.size() << std::endl;
		MutantStack<double>::iterator it;
		for(it = list.begin(); it != list.end(); it++)
				std::cout << " " << *it << " " <<std::endl;

		MutantStack<double>::reverse_iterator rit;
		std::cout << "List-size: " <<list.size() << std::endl;
		for(rit = list.rbegin(); rit != list.rend(); rit++)
				std::cout << " " << *rit << " " <<std::endl;

		list.pop();

		std::cout << "List-size: " <<list.size() << std::endl;
		for(it = list.begin(); it != list.end(); it++)
				std::cout << " " << *it << " " <<std::endl;
	}

	return(0);
 }