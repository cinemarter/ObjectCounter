#pragma once
#include "visitor.h"

class Visitor;

class Shape
{
public:
	virtual ~Shape() = default;

	virtual void accept(Visitor* pV) = 0;
};

class Circle : public Shape
{
public:
	void accept(Visitor* pV);
};

class Rectangle : public Shape
{
public:
	void accept(Visitor* pV);
};