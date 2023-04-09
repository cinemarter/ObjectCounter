#include "shape.h"

void Circle::accept(Visitor* pV)
{
	pV->visit(this);
}

void Rectangle::accept(Visitor* pV)
{
	pV->visit(this);
}