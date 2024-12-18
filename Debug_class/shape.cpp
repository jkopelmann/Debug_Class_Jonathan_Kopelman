#include "Shape.h"

Shape::Shape() : _area(0), _perimeter(0)
{

}

void Shape::SetShape(float area)
{
	this->_area = area;
}


float Shape::get_area() const
{
	return _area;
}
