#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class Phonebook
{
private:
	int _count;
	Contact _contacts[8];

public:
	Phonebook();
	~Phonebook();
	void add_contact(Contact contact);
	void search();

	int getCount();
	Contact getContact(int id);
};

#endif