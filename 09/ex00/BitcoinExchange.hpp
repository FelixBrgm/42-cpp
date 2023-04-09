#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_bitcoin_prices;
		std::ifstream 					_file;
		std::string						_database_filename;

		std::ifstream* _open_file(std::string& filename);
		void _insert_data_from_file();
		void _close_file(std::ifstream* _stream);
		std::pair<std::string, float> _parse_line(std::string& line);


	public:
		BitcoinExchange();
		~BitcoinExchange();
		void display_price(std::string line);
		void display_file(std::string line);
};

#endif
