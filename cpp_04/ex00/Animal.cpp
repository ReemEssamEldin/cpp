#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const std::string &type)
{
    this->_type = type;
    std::cout << GREEN << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &other)
{
    this->_type = other._type;
    std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    std::cout << CYAN << "Animal assignment operator called" << RESET << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << RED << "Animal destructor called" << RESET << std::endl;
}

void Animal::makeSound() const
{
    std::cout << MAGENTA << "Animal makes a generic sound" << RESET << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}