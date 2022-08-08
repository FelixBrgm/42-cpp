#include "Phonebook.hpp"

void print_column(std::string str);

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{

}

void Phonebook::add_contact(Contact _contact)
{
	if (count == 8)
	{
		for (size_t i = 0; i < 7; i++)
			contacts[i] = contacts[i + 1];
		contacts[7] = _contact;
	}
	else
	{
		contacts[count] = _contact;
		count++;
	}
}

void Phonebook::search()
{
	for (int i = 0; i < count; i++)
	{
		std::cout << i;
		print_column(contacts[i].first_name);
		print_column(contacts[i].last_name);
		print_column(contacts[i].nickname);
		std::cout << "\n";
	}
}

void print_column(std::string str)
{
	std::cout << "|";
	if (str.length() == 10)
		std::cout << str;
	else if (str.length() < 10)
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		str.erase(9);
		std::cout << str << ".";
	}
}