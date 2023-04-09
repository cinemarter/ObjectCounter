/*
Object Counter
A simple program that counts the number of objects of a specific type in a collection. 
Using Visitor design pattern to count the number of objects of a specific type. 
*/

#include <iostream>
#include <vector>

#include "enum.h"
#include "visitor.h"
#include "shape.h"

int main()
{
	Circle c1, c2;
	Rectangle r3, r4, r5;
	std::vector<Shape*> col{&c1,&c2,&r3,&r4,&r5};
	VisitorCounter v(EObjectType::Rectangle);
	for (auto& el : col)
	{
		el->accept(&v);
	}
	std::cout << v.GetCount() << std::endl;
	return 0;
}