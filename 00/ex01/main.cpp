#include <iostream>
#include "Phonebook.hpp"

bool		input_parse(std::string input);
void		add(Phonebook &phonebook);
std::string read_var(std::string message);
void search(Phonebook phonebook);
int main()
{
	std::string input;
	Phonebook	phonebook = Phonebook();

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
	int i;

	if (phonebook.count == 0)
		return ;
	phonebook.search();
	do
	{
		str = read_var("Enter ID to get more information\n> ");
		i = std::stoi(str);
	} while (!(i < phonebook.count && i >= 0));
	phonebook.contacts[i].search();
}

void	add(Phonebook &phonebook)
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
		if (std::cin.eof() || std::cin.fail())
			exit(1);
		std::cout << message;
		std::getline(std::cin, input);
	} while (input == "");
	return input;
}
