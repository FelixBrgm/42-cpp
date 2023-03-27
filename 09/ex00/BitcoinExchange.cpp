#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <fstream>
#include <iostream>

std::ifstream& _open_file(std::string filename);

BitcoinExchange::BitcoinExchange()
{
	insert_data_from_file("./data.csv");
};
BitcoinExchange::~BitcoinExchange() { };

float BitcoinExchange::calculatePrice(std::string date, double value)
{
	// Check if ther is even a value in the database
	return (0);
};

void BitcoinExchange::insert_data_from_file(std::string filename)
{
	std::cout << filename << std::endl;
	std::ifstream file = _open_file(filename);

	// Go over every single line

	// It tries to insert the data here and throws an exceptio if it doesn't suceed
		// check if head is (name, name)
		// first 4 chars date
		// -
		// next 2 chars (between 12)
		// - 
		// next 2 chars
		// ,
		// value
			// number
			// optional (.) -> number
		// ELSE throw error for that line
};

std::ifstream _open_file(std::string& filename)
{
	_file = std::ifstream temp(filename.c_str());
	if (!_file) {
		throw std::runtime_error("Failed to open file.");
	}

	std::string content;
	try {
		content.assign((std::istreambuf_iterator<char>(_file)),
						std::istreambuf_iterator<char>());

	if (_file.bad()) {
		throw std::runtime_error("Failed to read file.");
	}

	} catch (...) {
		_file.close();
		throw;
	}

	return _file;
}