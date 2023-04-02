#pragma once
#include "visitor.h"

class Visitor;
class VisitorCircle;
class VisitorRectangle;

class Shape
{
public:
	virtual ~Shape() = default;

	virtual void accept(Visitor* V, int& count) = 0;
};

class Circle : public Shape
{
public:
	void accept(Visitor* V, int& count);
};

class Rectangle : public Shape
{
public:
	void accept(Visitor* V, int& count);
};