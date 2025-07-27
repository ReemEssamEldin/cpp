#include "Animal.hpp"

Animal::Animal()   {
    this->_type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string& type) {
    this->_type = type;
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
    this->_type = other._type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}