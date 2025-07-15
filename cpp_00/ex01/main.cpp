#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

static bool isAlpha(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isalpha(str[i]))
			return false;
	}
	return true;
}

static bool isDigits(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

static std::string prompt(const std::string& field)
{
	std::string input;
	while (true)
	{
		std::cout << YELLOW << field << RESET;
		if (!std::getline(std::cin, input))
			return std::string();
		if (input.empty()) {
			std::cout << RED << "Field cannot be empty." << RESET << std::endl;
			continue;
		}
		if (field != "Phone number: " && !isAlpha(input)) {
			std::cout << RED << "Field must contain only alphabetic characters." << RESET << std::endl;
			continue;
		}
		if (field == "Phone number: " && !isDigits(input)) {
			std::cout << RED << "Phone number must contain only digits." << RESET << std::endl;
			continue;
		}
		return input;
	}
}

int	main()
{
	PhoneBook	book;
	std::string	command;
	while (std::cout << BLUE << "Enter command (ADD, SEARCH, EXIT): " << RESET && std::getline(std::cin, command))
	{
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			Contact	c;
			c.setFirstName(prompt("First name: "));
			c.setLastName(prompt("Last name: "));
			c.setNickname(prompt("Nickname: "));
			c.setPhoneNumber(prompt("Phone number: "));
			c.setDarkestSecret(prompt("Darkest secret: "));

			book.addContact(c);
			std::cout << GREEN << "Contact added." << RESET << std::endl;
		}
		else if (command == "SEARCH")
		{
			if (book.getSize() == 0)
			{
				std::cout << RED << "PhoneBook is empty." << RESET << std::endl;
				continue;
			}
			book.displayContacts();
			std::cout << BLUE << "Enter index: " << RESET;
			std::string indexStr;
			if (!std::getline(std::cin, indexStr))
				break;
			int index = std::atoi(indexStr.c_str());
			const Contact* c = book.getContact(index);
			if (!c)
			{
				std::cout << RED << "Invalid index." << RESET << std::endl;
			}
			else
			{
				std::cout << MAGENTA << "First name: " << RESET << c->getFirstName() << std::endl;
				std::cout << MAGENTA << "Last name: " << RESET << c->getLastName() << std::endl;
				std::cout << MAGENTA << "Nickname: " << RESET << c->getNickname() << std::endl;
				std::cout << MAGENTA << "Phone number: " << RESET << c->getPhoneNumber() << std::endl;
				std::cout << MAGENTA << "Darkest secret: " << RESET << c->getDarkestSecret() << std::endl;
			}
		}
	}
	return (0);
}
