#include "stdafx.h"
#include <iostream>
#include "Tweeter.h"
#include "Person.h"

Tweeter::Tweeter(std::string first, std::string last, int num, std::string handle) : Person(first, last, num), twitterHandle(handle){
	std::cout << "Contructing tweeter" << twitterHandle << std::endl;
}

Tweeter::~Tweeter() {
	std::cout << "Destructing " << std::endl;
}