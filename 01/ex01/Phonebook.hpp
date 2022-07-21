#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	int		count;
public:
	Phonebook();
	~Phonebook();
	void add_contact(Contact contact);
};



#endif