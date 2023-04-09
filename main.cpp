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

EObjectType GetObjectType()
{
	char input;
	std::cout << "Enter 'c' to count Circle objects or 'r' to count Rectangle objects" << std::endl;
	std::cin >> input;
	switch (input)
	{
	case 'c':
	case 'C':
		return EObjectType::Circle;
		break;
	case 'r':
	case 'R':
		return EObjectType::Rectangle;
		break;
	default:
		std::cout << "Well, we don't have such type, sorry!" << std::endl;
		break;
	}
}

int main()
{
	std::vector<std::unique_ptr<Shape>> col;
	col.emplace_back(std::make_unique<Circle>());
	col.emplace_back(std::make_unique<Rectangle>());
	col.emplace_back(std::make_unique<Circle>());
	col.emplace_back(std::make_unique<Rectangle>());
	col.emplace_back(std::make_unique<Rectangle>());

	VisitorCounter v(GetObjectType());
	for (auto& el : col)
	{
		el->accept(&v);
	}
	std::cout << v.GetCount() << std::endl;
	return 0;
}