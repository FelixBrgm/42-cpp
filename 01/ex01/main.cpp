#include <iostream>
#include "Phonebook.hpp"

bool		input_parse(std::string input);
void		add(Phonebook phonebook);
std::string read_var(std::string message);

int main()
{
	std::string input;
	Phonebook	phonebook;

	do 
	{
		std::cout << "Please enter ADD, SEARCH or EXIT\n";
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
			add(phonebook);
		// else if (input == "SEARCH")
	} while (input != "EXIT");
	
	std::cout << "END OF FUNCTION\n";
	return (0);
}

void	add(Phonebook phonebook)
{
	Contact		contact;
	std::string	input;
	
	input = read_var("Please enter the first name\n");
	contact.first_name = input;
	input = read_var("Please enter the last name\n");
	contact.last_name = input;
	input = read_var("Please enter the nickname\n");
	contact.nickname = input;
	input = read_var("Please enter the phonenumber\n");
	contact.phonenumber = input;
	input = read_var("Please enter the darkest secret\n");
	contact.darkest_secret = input;
	phonebook.add_contact(contact);
}

std::string read_var(std::string message)
{
	std::string input;

	do
	{
		std::cout << message;
		std::getline(std::cin, input);
	} while (input == "");
	return input;
}

// void	search(std::string input)
// {
// 	if 
// }