#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "[ DEBUG ] I love to get extra bacon for my burger" << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money" << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free" << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager" << std::endl;
}

void Harl::complain(std::string level) {
    typedef void (Harl::*Func)();
    struct { const char* name; Func func; } table[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };
    for (size_t i = 0; i < 4; ++i) {
        if (level == table[i].name) {
            (this->*table[i].func)();
            return;
        }
    }
}
