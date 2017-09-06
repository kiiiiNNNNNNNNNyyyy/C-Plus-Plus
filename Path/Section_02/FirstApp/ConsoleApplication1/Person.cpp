#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int number) : firstName(first), lastName(last), randomNumber(number) {
	std::cout << "Contructing " << firstName << " " << lastName << std::endl;
};

Person::~Person() {
	std::cout << "Destructor is running!!";
}