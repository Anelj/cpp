#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]\n"
				 "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. I "
				 "really do!\n";
}

void Karen::info( void )
{
	std::cout << "[ INFO ]\n"
				 "I cannot believe adding extra bacon costs more money. You didn’t put\n"
				 "enough bacon in my burger! If you did, I wouldn’t be asking"
				 " for more!\n";
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]\n"
				 "I think I deserve to have some extra bacon for free.\n"
				 "I've been coming for years whereas you started working here"
				 " since last month.\n";
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]\n"
				 "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain( std::string level )
{
	std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*f[])(void) =
			{&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (size_t i = 0; i < lvls->length(); i++)
	{
		if (lvls[i] == level)
		{
			(this->*(f[i]))();
		}
	}
}
