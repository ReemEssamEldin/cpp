#include "Contact.hpp"

Contact::Contact() {}

void	Contact::setFirstName(const std::string& str) { _firstName = str; }
void	Contact::setLastName(const std::string& str) { _lastName = str; }
void	Contact::setNickname(const std::string& str) { _nickname = str; }
void	Contact::setPhoneNumber(const std::string& str) { _phoneNumber = str; }
void	Contact::setDarkestSecret(const std::string& str) { _darkestSecret = str; }

const	std::string& Contact::getFirstName() const { return _firstName; }
const	std::string& Contact::getLastName() const { return _lastName; }
const	std::string& Contact::getNickname() const { return _nickname; }
const	std::string& Contact::getPhoneNumber() const { return _phoneNumber; }
const	std::string& Contact::getDarkestSecret() const { return _darkestSecret; }
