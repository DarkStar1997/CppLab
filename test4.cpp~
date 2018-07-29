#include <iostream>
class Rectangle
{
public:
	float length, width;
	void setLength(float x)
	{
		length = x;
	}
	void setWidth(float x)
	{
		width = x;
	}
	float perimeter()
	{
		return 2 * (length + width);
	}
	float area()
	{
		return length * width;
	}
	int sameArea(Rectangle &obj)
	{
		return (area() == obj.area());
	}
};
int main()
{
	Rectangle r1, r2;
	r1.setLength(6); r1.setWidth(3.5);
 	r2.setLength(9); r2.setWidth(10.5);
	std::cout<<"The two rectangles have "<< (r1.sameArea(r2)?"same":"different") <<" area\n";
}
