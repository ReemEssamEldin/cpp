#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    // Uncomment for error
    // Animal test;

    std::cout << BLUE << "=== Testing deep copy of Dog ===" << RESET << std::endl;
    Dog* original = new Dog();
    original->getBrain()->setIdea(0, "I am a good dog");
    original->getBrain()->setIdea(1, "I love my owner");

    Dog* copy = new Dog(*original);
    copy->getBrain()->setIdea(0, "I am a copy");

    std::cout << "Original idea 0: " << original->getBrain()->getIdea(0) << std::endl;
    std::cout << "Original idea 1: " << original->getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy idea 0: " << copy->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy idea 1: " << copy->getBrain()->getIdea(1) << std::endl;

    delete original;
    delete copy;

    std::cout << BLUE << "\n=== Testing deep copy of Cat ===" << RESET << std::endl;
    Cat* originalCat = new Cat();
    originalCat->getBrain()->setIdea(0, "I am a cat");
    originalCat->getBrain()->setIdea(1, "I like fish");

    Cat* copyCat = new Cat(*originalCat);
    copyCat->getBrain()->setIdea(0, "I am a cat copy");

    std::cout << "Original Cat idea 0: " << originalCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "Original Cat idea 1: " << originalCat->getBrain()->getIdea(1) << std::endl;
    std::cout << "Copy Cat idea 0: " << copyCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Cat idea 1: " << copyCat->getBrain()->getIdea(1) << std::endl;

    delete originalCat;
    delete copyCat;

    std::cout << BLUE << "\n=== Testing array of Animals ===" << RESET << std::endl;
    const int arraySize = 6;
    Animal* animals[arraySize];

    // Half dogs, half cats
    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
        animals[i + arraySize / 2] = new Cat();
    }

    std::cout << BLUE << "\n=== Testing polymorphism ===" << RESET << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
        animals[i]->makeSound();
    }

    std::cout << RED << "\n=== Deleting animals ===" << RESET << std::endl;
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    return 0;
}
