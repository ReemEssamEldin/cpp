#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define ORANGE	"\033[0;33;43m"
#define RESET	"\033[0m"

class PhoneBook
{
public:
	PhoneBook();

	void			addContact(const Contact& contact);
	void			displayContacts() const;
	const Contact*	getContact(int index) const;
	int getSize()	const;

private:
	Contact	_contacts[8];
	int		_count;
	int		_index;
};

#endif
