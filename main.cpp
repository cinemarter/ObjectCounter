/*
Object Counter
A program that counts the number of objects of a specific type in a collection. 
Using Visitor design pattern to count the number of objects of a specific type. 
*/
#include <vector>

#include "enum.h"
#include "visitor.h"
#include "shape.h"

int main()
{
	Circle c1, c2;
	Rectangle r3, r4, r5;
	std::vector<Shape*> col{&c1,&c2,&r3,&r4,&r5};
	VisitorCircle v1;
	VisitorRectangle v2;
	int count = 0;
	EObjectType EObj{ EObjectType::Circle };
	for (auto& el : col)
	{
		switch (EObj)
		{
		case EObjectType::Circle:
			el->accept(&v1, count);
			break;
		case EObjectType::Rectangle:
			el->accept(&v2, count);
			break;
		}
	}
	return 0;
}