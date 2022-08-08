#include "Contact.hpp"

Contact::Contact()
{
	_first_name = std::string();
	_last_name = std::string();
	_nickname = std::string();
	_darkest_secret = std::string();
	_phonenumber = std::string();
}
Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phonenumber, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phonenumber = phonenumber;
}

Contact::~Contact()
{
}

void Contact::search()
{
	std::cout << "First name: " << _first_name << "\n";
	std::cout << "Last name: " << _last_name << "\n";
	std::cout << "Nickname: " << _nickname << "\n";
	std::cout << "Darkest Secret: " << _darkest_secret << "\n";
	std::cout << "Phonenumber: " << _phonenumber << "\n";
}

// Getters
std::string Contact::getfirst_name()
{
	return _first_name;
}

std::string Contact::getlast_name()
{
	return _last_name;
}

std::string Contact::getnickname()
{
	return _nickname;
}

std::string Contact::getphonenumber()
{
	return _phonenumber;
}

std::string Contact::getdarkest_secret()
{
	return _darkest_secret;
}

// Setters
void Contact::setfirst_name(std::string input)
{
	_first_name = input;
}

void Contact::setlast_name(std::string input)
{
	_last_name = input;
}

void Contact::setnickname(std::string input)
{
	_nickname = input;
}

void Contact::setphonenumber(std::string input)
{
	_phonenumber = input;
}

void Contact::setdarkest_secret(std::string input)
{
	_darkest_secret = input;
}