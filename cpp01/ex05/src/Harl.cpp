#include "../inc/Harl.hpp"

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

void Harl::complain(std::string level)
{
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == complains[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "Harl: worng comand, try again" << std::endl;
}
