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

    std::cout << "\n\nWrong Animal Test\n\n"
              << std::endl;

    std::cout << "WrongAnimal -> WrongCat" << std::endl;
    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << "  " << std::endl;
    wrongCat->makeSound(); // WrongAnimal sound

    
    std::cout << "\n\nWrongCat -> WrongCat" << std::endl;
    const WrongCat *wrongCatCat = new WrongCat();
    std::cout << wrongCatCat->getType() << "  " << std::endl;
    wrongCatCat->makeSound(); // WrongCat sound

    delete wrongCat;
    delete wrongCatCat;

    return 0;
}