#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0), _index(0) {}

void	PhoneBook::addContact(const Contact& contact)
{
	_contacts[_index] = contact;
	_index = (_index + 1) % 8;
	if (_count < 8)
		_count++;
}

void	PhoneBook::displayContacts() const
{
	std::cout << ORANGE << std::setw(10) << "index" << '|' << std::setw(10) << "first name" << '|' << std::setw(10) << "last name" << '|' << std::setw(10) << "nickname" << RESET << std::endl;
	for (int i = 0; i < _count; ++i)
	{
		std::cout << std::setw(10) << i << YELLOW << '|' << RESET;
		std::string str;
		str = _contacts[i].getFirstName();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << YELLOW << '|' << RESET;
		str = _contacts[i].getLastName();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << YELLOW << '|' << RESET;
		str = _contacts[i].getNickname();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << std::setw(10) << str << std::endl;
	}
}

const Contact* PhoneBook::getContact(int index) const
{
	if (index < 0 || index >= _count)
		return 0;
	return &_contacts[index];
}

int PhoneBook::getSize() const { return _count; }
