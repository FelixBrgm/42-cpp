#include <stdexcept>
#include <iostream>
#include "BitcoinExchange.hpp"


int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "USAGE: ./btc FILE_NAME" << std::endl;
		return (1);
	}
	
	try {
		BitcoinExchange exchange;
		exchange.display_file(argv[1]);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}

	// Ask BitcoinExchane about every single one

	return (0);
}