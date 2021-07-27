#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	
	Cat cat1;
	Cat	cat2(cat1);
	std::cout << "cat1 brain: " << cat1.getBrain() << std::endl;
	std::cout << "cat2 brain: " << cat2.getBrain() << std::endl;
	return 0;
}
