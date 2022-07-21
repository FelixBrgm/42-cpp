#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	Phonebook::count = 0;
}

Phonebook::~Phonebook()
{

}

void Phonebook::add_contact(Contact _contact)
{
	if (count == 8)
	{
		for (size_t i = 0; i < 7; i++)
		{
			contacts[i] = contacts[i + 1];
		}
		contacts[7] = _contact;
	}
	else
	{
		contacts[count] = _contact;
		count++;
	}
}

// void Phonebook::search()
// {
	
// }