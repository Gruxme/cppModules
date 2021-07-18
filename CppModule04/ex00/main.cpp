#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *tootToot = new Dog();
	const Animal *sidney = new Cat();
	

	std::cout << sidney->getType() << " " << std::endl;
	std::cout << tootToot->getType() << " " << std::endl;
	sidney->makeSound(); //will output the cat sound!
	tootToot->makeSound();
	meta->makeSound();

	std::cout << "----------------------------Wrong--------------------------------\n";
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongSidney = new WrongCat();

	std::cout << wrongSidney->getType() << " " << std::endl;
	wrongSidney->makeSound(); //will output the WrongAnimal sound!
	wrongMeta->makeSound();
	return 0;
}
