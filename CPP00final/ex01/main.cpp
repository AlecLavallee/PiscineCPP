#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook test;
	std::string line;

	std::cout << "To add a new contact, press ADD" << std::endl; 
	std::cout << "else to search, enter SEARCH" << std::endl;
	std::cout << "to exit, enter EXIT:" << std::endl;
	while (1)
	{
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
		{
			test.ADD();
		}
		if (line.compare("SEARCH") == 0)
		{
			test.SEARCH();
		}
		if (line.compare("EXIT") == 0)
			return (0);
	}
}
