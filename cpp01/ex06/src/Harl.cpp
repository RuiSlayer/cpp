#include "../inc/Harl.hpp"

enum e_level { DEBUG = 0, INFO, WARNING, ERROR, UNKNOWN };

Harl::Harl(void)
{
	std::cout << GREEN << "Harl: Default constructor called"
		<< RESET << std::endl;
}

Harl::~Harl(void)
{
	std::cout << RED << "Harl: Destructor called"
		<< RESET << std::endl;
}

void Harl::debug(void)
{
	std::cout << "Harl: debug..." << std::endl;
}
void Harl::info(void)
{
	std::cout << "Harl: new info for you!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "Harl: Warnig was raise!" << std::endl;
}
void Harl::error(void)
{
	std::cout << "Harl: Error was found!" << std::endl;
}

e_level getLevel(std::string level)
{

	if (level == "DEBUG")   return DEBUG;
	if (level == "INFO")    return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR")   return ERROR;
	return UNKNOWN;
}

void Harl::complain(std::string level)
{
	switch (getLevel(level))
	{
		case DEBUG:
			debug();
			// fall through
		case INFO:
			info();
			// fall through
		case WARNING:
			warning();
			// fall through
		case ERROR:
			error();
			break;
		default:
			std::cout << "Harl: worng comand, try again" << std::endl;
		break;
	}
}
