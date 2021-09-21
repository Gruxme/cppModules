/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:38:55 by abiari            #+#    #+#             */
/*   Updated: 2021/09/21 09:47:39 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter *me = new Character("me");
	
	AMateria *materia;
	materia = src->createMateria("ice");
	me->equip(materia);
	materia = src->createMateria("cure");
	me->equip(materia);
	ICharacter *bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);
	
	std::cout << "clone test ----------------------" << std::endl;
	AMateria *cloneCure;
	materia = src->createMateria("cure");
	cloneCure = materia->clone();
	me->equip(cloneCure);
	me->use(0, *bob);
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
