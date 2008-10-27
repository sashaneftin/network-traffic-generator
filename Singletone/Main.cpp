// Test C++ plugin

#include <iostream>
using namespace std;

#include "Singletone.h"

int main (void)
{
	Singletone* s1  = Singletone::getInstance();
	Singletone* s2  = Singletone::getInstance();
	
	s1->SetData(77);
	
	
	
	std::cout << "The singletone 1: " << s1->GetData() << std::endl;
	std::cout << "The singletone 2: " << s2->GetData() << std::endl;
	
	unsigned char x = 0x0a;
	printf("There is HEXA print example:   0x%02x",x);
	
}
