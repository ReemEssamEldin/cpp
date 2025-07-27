#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << "  " << std::endl;
    std::cout << i->getType() << "  " << std::endl;

    i->makeSound(); // Cat sound
    j->makeSound(); // Dog sound

    delete meta;
    delete j;
    delete i;

    std::cout << RED << "\n\n########  Wrong Animal Test  ########\n\n" << RESET << std::endl;

    std::cout << BLUE << "WrongAnimal -> WrongCat" << RESET << std::endl;
    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << "  " << std::endl;
    wrongCat->makeSound(); // WrongAnimal sound


    std::cout << BLUE << "\n\nWrongCat -> WrongCat" << RESET << std::endl;
    const WrongCat *wrongCatCat = new WrongCat();
    std::cout << wrongCatCat->getType() << "  " << std::endl;
    wrongCatCat->makeSound(); // WrongCat sound

    delete wrongCat;
    delete wrongCatCat;

    return 0;
}
