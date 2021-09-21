#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << "----------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	std::cout << "----------------------------" << std::endl;
	Cat cat1;
	Cat	cat2(cat1);
	std::cout << "cat1 brain: " << cat1.getBrain() << std::endl;
	std::cout << "cat2 brain: " << cat2.getBrain() << std::endl;
	return 0;
}
