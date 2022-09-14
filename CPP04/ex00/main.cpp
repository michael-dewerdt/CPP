#include "main.hpp"

int main()
{
    const Animal* first = new Animal();
    const Animal* doggy = new Dog();
    const Animal* kitty = new Cat();
    doggy->makeSound(); //will output the cat sound!
    kitty->makeSound();
    meta->makeSound();

    std::cout << "TESTS w/WRONG" << std::endl;

    const WrongAnimal* wrongone = new WrongAnimal();
    const WrongAnimal* doggystyle = new Dog();
    const WrongAnimal* kittystyle = new WrongCat();
    doggystyle->makeSound(); //will output the cat sound!
    kittystyle->makeSound();
    wrongone->makeSound();
    
    return 0;
}