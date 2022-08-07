#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class Phonebook
{
public:
	int		count;
	Contact contacts[8];
	Phonebook();
	~Phonebook();
	void add_contact(Contact contact);
	void search();
};



#endif