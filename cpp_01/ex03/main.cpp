#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main() {
    Weapon club("crude spiked club");
    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(club);

    bob.attack();
    jim.attack();

    club.setType("some other type of club");

    bob.attack();
    jim.attack();
}
