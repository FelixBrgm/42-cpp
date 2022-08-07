#include "Contact.hpp"

Contact::Contact()
{
	first_name = std::string();
	last_name = std::string();
	nickname = std::string();
	darkest_secret = std::string();
	phonenumber = std::string();
}
Contact::Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phonenumber, std::string _darkest_secret)
{
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	darkest_secret = _darkest_secret;
	phonenumber = _phonenumber;
}

Contact::~Contact()
{

}


void Contact::search()
{
	std::cout << "First name: " << first_name << "\n";
	std::cout << "Last name: " << last_name << "\n";
	std::cout << "Nickname: " << nickname << "\n";
	std::cout << "Darkest Secret: " <<darkest_secret << "\n";
	std::cout << "Phonenumber: " << phonenumber << "\n";
}