#pragma once
#include "shape.h"

class Shape;
class Circle;
class Circle;

class Visitor
{
public:
	virtual void visit(Shape*, int& count) = 0;
};

class VisitorCircle : public Visitor
{
public:
	void visit(Shape* pB, int& count);
};

class VisitorRectangle : public Visitor
{
public:
	void visit(Shape* pB, int& count);
};