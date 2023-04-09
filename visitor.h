#pragma once
#include "shape.h"
#include "enum.h"

class Circle;
class Rectangle;

class Visitor
{
public:
	virtual void visit(Circle* pObj) = 0;
	virtual void visit(Rectangle* pObj) = 0;
};

class VisitorCounter : public Visitor
{
public:
	VisitorCounter(EObjectType type) : _type(type) {}
	void visit(Circle*) override;
	void visit(Rectangle*) override;

	int GetCount() const { return _objectCount; }

private:
	int _objectCount = 0;
	EObjectType _type;
};
