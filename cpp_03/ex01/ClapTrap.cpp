#include "ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap() { 
    this->_name = "default";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << this->_name << " is constructed!" << std::endl;
}

// Constructor with name
// This constructor initializes a ClapTrap object with a specific name
ClapTrap::ClapTrap(const std::string& name) { 
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << this->_name << " is constructed!" << std::endl;
}

// Copy constructor
// This constructor initializes a new ClapTrap object as a copy of another ClapTrap object
ClapTrap::ClapTrap(const ClapTrap& other) {
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    std::cout << "ClapTrap " << this->_name << " is copy constructed!" << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << this->_name << " is assigned!" << std::endl;
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() { 
    std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " can't attack!" << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target 
              << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints <= amount) {
        this->_hitPoints = 0;
    } else {
        this->_hitPoints -= amount;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount 
              << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0) {
        std::cout << "ClapTrap " << this->_name << " can't be repaired!" << std::endl;
        return;
    }
    this->_energyPoints--;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount 
              << " hit points!" << std::endl;
}