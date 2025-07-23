#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    Harl harl;
    if (argc != 2) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == argv[1]) {
            index = i;
            break;
        }
    }
    switch (index) {
        case 0:
            harl.complain("DEBUG");
            /* fallthrough */
        case 1:
            harl.complain("INFO");
            /* fallthrough */
        case 2:
            harl.complain("WARNING");
            /* fallthrough */
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}
