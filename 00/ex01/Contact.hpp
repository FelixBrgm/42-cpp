#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phonenumber;
	std::string darkest_secret;
	Contact();
	Contact(std::string _first_name, std::string _last_name, std::string _nickname,std::string phonenumber, std::string _darkest_secret);
	~Contact();
	void search();
};

#endif