#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << GREEN << "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
    this->_type = type;
    std::cout << GREEN << "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    this->_type = other._type;
    std::cout << GREEN << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << CYAN << "WrongAnimal assignment operator called" << RESET << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << MAGENTA << "WrongAnimal makes a generic sound" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}