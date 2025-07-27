#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << BLUE << "ScavTrap " << this->_name << " is constructed!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << BLUE << "ScavTrap " << this->_name << " is constructed!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << BLUE << "ScavTrap " << _name << " is copy constructed!" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << CYAN << "ScavTrap " << _name << " is assigned!" << RESET << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << RED << "ScavTrap " << _name << " is destroyed!" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_hitPoints == 0 || this->_energyPoints == 0) {
        std::cout << YELLOW << "ScavTrap " << this->_name << " can't attack!" << RESET << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout << YELLOW << "ScavTrap " << this->_name << " ferociously attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << MAGENTA << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << RESET << std::endl;
}
