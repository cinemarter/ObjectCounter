#include "shape.h"

void Circle::accept(Visitor* V, int& count)
{
	V->visit(this, count);
}

void Rectangle::accept(Visitor* V, int& count)
{
	V->visit(this, count);
}