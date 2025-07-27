#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap basic("Basic");
    ScavTrap guard("Guardian");
    FragTrap frag("Exploder");

    basic.attack("enemy");
    guard.attack("intruder");
    frag.attack("target");

    guard.guardGate();
    frag.highFivesGuys();

    return 0;
}