#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape 
{
private:
	float _area;
	float _perimeter;

public:
	Shape();
	void SetShape(float area);
	virtual float get_area() const;
	

};

#endif	// __SHAPE_H__
