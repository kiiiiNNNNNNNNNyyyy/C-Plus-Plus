#pragma once
#include <string>

#ifndef _Person_H
#define _Person_H
class Person {
	private:
		std::string firstName;
		std::string lastName;
		int randomNumber;

	public:
		Person(std::string first, std::string last, int number);
		~Person();
};
#endif