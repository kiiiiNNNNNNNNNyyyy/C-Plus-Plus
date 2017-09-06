// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include <iostream>


int main()
{
	Person p1("Arjun", "Dass", 23); 
	{
		Tweeter t1("Akshay", "Mullay", 25, "@dontsopbelievin");
	}

	std::cout << "After innermost block " << std::endl;

	Status s = Pending;
	s = Approved; 
	std::cout << s << std::endl;

    return 0;
}

