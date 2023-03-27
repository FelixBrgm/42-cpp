#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float> bitcoin_price_history;
		std::ifstream 				_file;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		float calculatePrice(std::string date, double value);
		void insert_data_from_file(std::string filename);
};

#endif
