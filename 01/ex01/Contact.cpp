#include "Contact.hpp"

Contact::Contact(int _index, std::string _first_name, std::string _last_name, std::string _nickname, std::string _darkest_secret)
{
	index = _index;
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	darkest_secret = _darkest_secret;
}

Contact::~Contact()
{

}

void Contact::view_index()
{
	std::cout << index;
}