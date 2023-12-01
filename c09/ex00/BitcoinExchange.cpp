
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string const & dbFile)
{
	std::ifstream file(dbFile.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open database file.");
	std::string line;
	while (getline(file, line))
	{
		std::stringstream ss(line);
		std::string date;
		float price;
		if (getline(ss, date, ',') && ss >> price)
			_rateMap[date] = price;
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & other) { *this = other; }

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != & rhs)
		this->_rateMap = rhs._rateMap;
	return *this;
}

bool BitcoinExchange::_isValidDate(std::string const & date) const
{
	int year, month, day;
	char delimiter;
	std::istringstream ss(date);
	ss >> year >> delimiter >> month >> delimiter >> day;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if ((month == 4 || month == 6 ||  month == 9 || month == 11) && day > 30)
		return false;
	else if (month == 2)
	{
		if  (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			if (day > 29)
				return false;
		}
		else
		{
			if (day > 28)
				return false;
		}
	}
	return (true);
}

float BitcoinExchange::getExchangeRate(std::string const & date, float value) const
{
	if (value < 0)
		throw std::runtime_error("Error: not a positive number.");
	if (value > 1000)
		throw std::runtime_error("Error: too large a number.");
	if (_isValidDate(date) == false)
		throw std::runtime_error("Error: inexistent date.");
	std::map<std::string, float>::const_iterator it = _rateMap.find(date);
	if (it == _rateMap.end())
	{
		it = _rateMap.upper_bound(date);
		if (it == _rateMap.begin())
			throw std::runtime_error("Error: no exchange rate found for given date.");
		--it;
	}
	return (it->second);
}

std::ostream & operator<<(std::ostream & os, BitcoinExchange const & i)
{
	(void)i;
	return os;
}
