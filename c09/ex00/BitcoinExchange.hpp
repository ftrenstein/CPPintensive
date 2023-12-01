
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string const & dbFile);
		BitcoinExchange(BitcoinExchange const & other);
		~BitcoinExchange(void);

		BitcoinExchange & operator=(BitcoinExchange const & rhs);

		float getExchangeRate(std::string const & date, float value) const;

	private:
		bool _isValidDate(std::string const & date) const;
		std::map<std::string, float> _rateMap;
		BitcoinExchange(void);
};

std::ostream & operator<<(std::ostream & os, BitcoinExchange const & i);


#endif
