// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include <iostream>
#include "Accum.h"


int main()
{
	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	std::cout << integers.GetTotal() << std::endl;

	Accum<std::string> strings("");
	strings += "hello ";
	strings += "world";
	std::cout << strings.GetTotal() << std::endl;

	Person start("", "", 0);
	Accum<Person> people(start);
	Person p3("Arjun", "Dass", 23);
	Person p4("Kinny", "Dass", 23);

	people += p3;
	people += p4;

	std::cout << people.GetTotal() << std::endl;


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

