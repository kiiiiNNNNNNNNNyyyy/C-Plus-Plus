#pragma once
#include "Person.h"
#include <iostream>
#include <string>

class Tweeter : public Person{
	private:
		std::string twitterHandle;

	public:
		Tweeter(std::string first, std::string last, int num, std::string handle);
		~Tweeter();

};