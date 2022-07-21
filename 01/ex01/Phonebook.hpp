#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[5];
public:
	Phonebook();
	~Phonebook();
};

#endif