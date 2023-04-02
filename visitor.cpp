#include "visitor.h"

void VisitorCircle::visit(Shape* pB, int& count)
{
	if (dynamic_cast<Circle*>(pB))
		++count;
}

void VisitorRectangle::visit(Shape* pB, int& count)
{
	if (dynamic_cast<Rectangle*>(pB))
		++count;
}