#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
public:
	Contact(int _index, std::string _first_name, std::string _last_name, std::string _nickname, std::string _darkest_secret);
	~Contact();
};

#endif