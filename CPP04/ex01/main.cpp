#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* arr[100];
    for (int i = 0; i < 50; i++)
        arr[i] = new Dog;
    for (int i = 0; i < 50; i++)
        arr[i] = new Cat;
    for (int i = 0; i < 100; i++)
        arr[i]->makeSound();
    for (int i = 0; i < 100; i++)
        delete arr[i];
    return 0;
}