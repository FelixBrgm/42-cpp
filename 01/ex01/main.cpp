#include <iostream>
#include "Phonebook.hpp"

bool	input_parse(std::string input);

int main()
{
	std::string input;

	std::cout << "Please enter ADD, SEARCH or EXIT\n";
	do 
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input_parse(input))
			std::cout << "Please enter ADD, SEARCH or EXIT\n";
	} while (input.compare("EXIT") != 0);
	
	std::cout << "END OF FUNCTION\n";
	return (0);
}

void	add(std::string input)
{
	
}

void	search(std::string input)
{

}

bool	input_parse(std::string input)
{
	if (input.compare("ADD") == 0)
	{
		add(input);
		return false;
	}
	else if (input.compare("SEARCH") == 0)
	{
		search(input);
		return false;
	}
	else if (input.compare("EXIT") == 0)
		return false;
	return true;
}