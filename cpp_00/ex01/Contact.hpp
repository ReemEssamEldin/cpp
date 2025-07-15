#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define CYAN	"\033[0;36m"
#define MAGENTA	"\033[0;35m"
#define YELLOW	"\033[0;33m"
#define BLUE	"\033[0;34m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

class	Contact
{
public:
	Contact();

	void	setFirstName(const std::string& str);
	void	setLastName(const std::string& str);
	void	setNickname(const std::string& str);
	void	setPhoneNumber(const std::string& str);
	void	setDarkestSecret(const std::string& str);

	const	std::string& getFirstName() const;
	const	std::string& getLastName() const;
	const	std::string& getNickname() const;
	const	std::string& getPhoneNumber() const;
	const	std::string& getDarkestSecret() const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
