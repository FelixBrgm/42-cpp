#include "Phonebook.hpp"

void print_column(std::string str);

Phonebook::Phonebook()
{
	_count = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::add_contact(Contact _contact)
{

	if (_count == 8)
	{
		for (size_t i = 0; i < 7; i++)
			_contacts[i] = _contacts[i + 1];
		_contacts[7] = _contact;
	}
	else
	{
		_contacts[_count] = _contact;
		_count++;
	}
}

void Phonebook::search()
{
	for (int i = 0; i < _count; i++)
	{
		std::cout << i;
		print_column(_contacts[i].getfirst_name());
		print_column(_contacts[i].getlast_name());
		print_column(_contacts[i].getnickname());
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

// Getters and Setters
int Phonebook::getCount()
{
	return _count;
}

Contact Phonebook::getContact(int id)
{
	return _contacts[id];
}