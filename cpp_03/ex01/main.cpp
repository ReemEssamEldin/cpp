#include "ScavTrap.hpp"

int main() {
    ScavTrap guard("Guardian");
    
    guard.attack("intruder");
    guard.takeDamage(30);
    guard.beRepaired(20);
    guard.guardGate();

    return 0;
}