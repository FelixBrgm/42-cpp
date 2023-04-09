#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <string>

float isValidLine(const std::string& line);
std::pair<std::string, float> _parse_input_line(const std::string& line);

BitcoinExchange::BitcoinExchange()
{
	_database_filename = "./data.csv";
	_insert_data_from_file();
};

BitcoinExchange::~BitcoinExchange() { };

void BitcoinExchange::display_file(std::string _input_file)
{
	std::ifstream* file = _open_file(_input_file);


	std::string line;

	std::getline(*file, line);

	std::cout << "|" << line << std::endl;
	if (line != "date | value") {
		throw std::runtime_error("Wrong header for input file.");
	}

	while (std::getline(*file, line)) {
		display_price(line);
	}


	_close_file(file);
}

void BitcoinExchange::display_price(std::string line)
{
	try
	{
		std::pair<std::string, float> pair = _parse_input_line(line);
		std::map<std::string, float>::iterator it =  _bitcoin_prices.lower_bound(pair.first);
		if (it == _bitcoin_prices.end()) throw std::runtime_error("Before start of recordings.");

		std::cout << pair.first << " => " << pair.second << " = " << pair.second * it->second << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
};

void BitcoinExchange::_insert_data_from_file()
{
	std::ifstream* file = _open_file(_database_filename);


	std::string line;

	std::getline(*file, line);

	if (line != "date,exchange_rate") {
		throw std::runtime_error("Wrong header for database file.");
	}

	std::cout << "--- Reading database --- " << std::endl;
	
	while (std::getline(*file, line)) {
		try
		{
			_bitcoin_prices.insert(_parse_line(line));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << "--------- Done ---------" << std::endl;
	std::cout << std::endl;

	_close_file(file);
};

std::pair<std::string, float> BitcoinExchange::_parse_line(std::string& line)
{
	float value;

	value = isValidLine(line);
	if (value == -1) throw std::runtime_error("Wrong format in database.");

	return std::make_pair(line.substr(0, 10), value);
}

std::ifstream* BitcoinExchange::_open_file(std::string& filename)
{
	std::ifstream* stream = new std::ifstream(filename.c_str());

	if (!stream->is_open()) {
		delete stream;
		throw std::runtime_error("Failed to open file.");
	}

	return stream;
}

void BitcoinExchange::_close_file(std::ifstream *stream)
{
	stream->close();
	delete stream;
}

bool isValidDate(int year, int month, int day) {
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
		return false;
	}
	if (month == 2 && day > 29) {
		return false;
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
		return false;
	}
	return true;
}

bool isValidValue(float value) {
	return value >= 0 && value <= 1000;
}

float isValidLine(const std::string& line) {
	char	separator;
	int		year;
	int		month;
	int		day;
	float	value;

	if (
		sscanf(line.c_str(), "%d-%d-%d%c%f", &year, &month, &day, &separator, &value) == 5
		&& separator == ','
		&& isValidDate(year, month, day)
		&& value >= 0) {
		return value;
	}
	return -1;
}

std::pair<std::string, float> _parse_input_line(const std::string& line) {
	char	separator;
	int		year;
	int		month;
	int		day;
	float	value;

	int parsed = sscanf(line.c_str(), "%d-%d-%d %c %f", &year, &month, &day, &separator, &value);

	if (parsed != 5 && separator == '|' ) throw std::runtime_error("Wrong general format [YYYY-MM-DD | VALUE]");

	if (!isValidDate(year, month, day)) throw std::runtime_error("Wrong date format");

	if (!isValidValue(value)) throw std::runtime_error("Incompatible number range. 0 <= n <= 1000");

	return std::make_pair(line.substr(0, 10), value);
}