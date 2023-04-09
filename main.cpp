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
	std::vector<std::unique_ptr<Shape>> col;
	col.emplace_back(std::make_unique<Circle>());
	col.emplace_back(std::make_unique<Rectangle>());
	col.emplace_back(std::make_unique<Circle>());
	col.emplace_back(std::make_unique<Rectangle>());
	col.emplace_back(std::make_unique<Rectangle>());
	VisitorCounter v(EObjectType::Circle);
	for (auto& el : col)
	{
		el->accept(&v);
	}
	std::cout << v.GetCount() << std::endl;
	return 0;
}