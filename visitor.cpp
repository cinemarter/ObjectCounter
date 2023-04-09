#include "visitor.h"

void VisitorCounter::visit(Circle* pObj)
{
	if (_type == EObjectType::Circle)
	{
		++_objectCount;
	}	
}

void VisitorCounter::visit(Rectangle* pObj)
{
	if (_type == EObjectType::Rectangle)
	{
		++_objectCount;
	}
}