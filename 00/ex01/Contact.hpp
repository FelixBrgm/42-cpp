#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkest_secret;

public:
	Contact();
	Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phonenumber, std::string _darkest_secret);
	~Contact();
	void search();
	std::string getfirst_name();
	std::string getlast_name();
	std::string getnickname();
	std::string getphonenumber();
	std::string getdarkest_secret();

	void setfirst_name(std::string input);
	void setlast_name(std::string input);
	void setnickname(std::string input);
	void setphonenumber(std::string input);
	void setdarkest_secret(std::string input);
};

#endif