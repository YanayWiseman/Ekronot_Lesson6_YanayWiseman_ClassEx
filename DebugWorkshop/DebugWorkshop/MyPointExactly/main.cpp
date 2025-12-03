#include "Point.h"
#include <iostream>

int main()
{
	Point p1(1, 2);
	Point p2 = p1;
	p2 = p2;

	// call the stream fucntion!!!
	std::cout << "p1=" << p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
}   

