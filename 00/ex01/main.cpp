#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include "Phonebook.hpp"

bool input_parse(std::string input);
void add(Phonebook &phonebook);
std::string read_var(std::string message);
void search(Phonebook phonebook);
int main()
{
	std::string input;
	Phonebook phonebook = Phonebook();

	do
	{
		input = read_var("Please enter ADD, SEARCH or EXIT\n> ");
		if (input == "ADD")
			add(phonebook);
		else if (input == "SEARCH")
			search(phonebook);
	} while (input != "EXIT");

	std::cout << "END OF FUNCTION\n";
	return (0);
}

void search(Phonebook phonebook)
{
	std::string str;
	int i = -1;

	if (phonebook.getCount() == 0)
		return;
	phonebook.search();
	do
	{
		str = read_var("Enter ID to get more information\n> ");
		sscanf(str.c_str(), "%i", &i);
	} while (!(i < phonebook.getCount() && i >= 0));
	phonebook.getContact(i).search();
}

void add(Phonebook &phonebook)
{
	Contact contact;
	std::string input;

	input = read_var("Please enter the first name\n");
	contact.setfirst_name(input);
	input = read_var("Please enter the last name\n");
	contact.setlast_name(input);
	input = read_var("Please enter the nickname\n");
	contact.setnickname(input);
	input = read_var("Please enter the phonenumber\n");
	contact.setphonenumber(input);
	input = read_var("Please enter the darkest secret\n");
	contact.setdarkest_secret(input);
	phonebook.add_contact(contact);
}

std::string read_var(std::string message)
{
	std::string input;

	do
	{
		if (std::cin.eof() || std::cin.fail())
			exit(1);
		std::cout << message;
		std::getline(std::cin, input);
	} while (input == "");
	return input;
}
