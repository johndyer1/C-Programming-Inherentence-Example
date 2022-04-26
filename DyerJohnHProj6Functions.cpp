#include "DyerJohnH.h"  //Includes the header file that has the declarations of every function and class
#include <iostream>  //Used to communicate with the console through typing


using namespace std;  //Uses universal standard namespace since only one programmer wrote it and it is not long


//Function's pre and post conditions given in header file




Shape::Shape()  //Constructor class that creates object with no name
{
	name = "";  //Enters no name value for the Rectangle object
}

Shape::Shape(string name)  //Constructor class that creates a Shape object with a name
{
	this->name = name;  //Sets name to parameter given by using the member-access operator
}

string Shape::getName() //Returns name of Shape object
{
	return this->name; //Returns name using member-access operator.
}

void Shape::setName(string newName) //Sets name of already constructed shape object
{
	this->name = newName;  //Sets name to parameter given by using the member-access operator
}



//Circle function section

Circle::Circle() : Shape("Circle"), radius(0)  //Derived object Circle of Shape is created and has name set to "circle" and radius to default of 0
{

}

Circle::Circle(int theRadius) : Shape("Circle"), radius(theRadius)  //Derived object Circle of Shape is created and has name set to "circle" and radius to the parameter given
{

}

void Circle::setRadius(int newRadius)  //Already existing Circle's radius is set to a new value
{
	this->radius = newRadius;  //Sets radius to newRadius by using the member-access operator
}

double Circle::getRadius()  //Returns radius of Circle object
{
	return radius; //Returns the radius of the referenced Circle.
}

double Circle::getArea()  //Returns the calculated area of the referenced Circle
{
	return 3.14159 * radius * radius;  //Uses formula for area of a circle
}



//Rectangle function section
	
Rectangle::Rectangle() : Shape("Rectangle"), width(0), height(0)  //Derived object Rectangle has default constructor set shape to "Rectangle", width to 0, and height to 0.
{

}

Rectangle::Rectangle(int width, int height) : Shape("Rectangle"), width(width), height(height)  //Derived object Rectangle has constructor set shape to "Rectangle", width to given parameter, and height to given parameter.
{

}

void Rectangle::setWidth(int newWidth)  //Sets referenced Rectangle's width to parameter given
{
	this->width = newWidth;  //Sets width to newWidth using the member-access operator
}

double Rectangle::getWidth()  //Returns the private data member of width from the object.
{
	return width;  //Returns width from the Rectangle object.
}

void Rectangle::setHeight(int newHeight)  //Sets referenced Rectandle's height to parameter given.
{
	this->height = newHeight;  //Sets height to newHeight using the member-access operator
}

double Rectangle::getHeight()  //Returns the private data member of height from the referenced object
{
	return height;  //Returns height
}

double Rectangle::getArea()  //Returns the area of the referenced Rectangle using the width*height formula
{
	return width * height;  //Returns area of referenced Rectangle object.
}