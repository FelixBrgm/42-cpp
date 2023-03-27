#include <stdexcept>
#include <iostream>
#include "BitcoinExchange.hpp"


int main() {
	try {
		BitcoinExchange exchange();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}

	// Ask BitcoinExchane about every single one

	return (0);
}