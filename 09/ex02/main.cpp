#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "PmergeMe.hpp"

std::string trim(const std::string& str) {
	size_t start = str.find_first_not_of(" \t\n\r");
	size_t end = str.find_last_not_of(" \t\n\r");

	if (start == std::string::npos) return "";

	return str.substr(start, end - start + 1);
}

int parse_pos_int(const std::string& str) {
	std::istringstream iss(trim(str));
	int value;
	iss >> value;

	if (value < 0 || !(iss && iss.eof())) throw std::runtime_error("Error");

	return value;
}

std::vector<int> parse(int argc, char **argv)
{
	std::vector<int> vec;

	if (argc < 2) throw std::runtime_error("Error");

	for (int i = 1; i < argc; i++)
	{
		vec.push_back(parse_pos_int(argv[i]));
	}

	return vec;
}

int main(int argc, char **argv)
{
	std::vector<int> vec;
	try
	{
		vec = parse(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}

	Pmerge pmerge(vec);

	pmerge.sort();
	// convert argv to int[]

	// construct pmerg class

	// make the calculations of both

	return (0);
}

