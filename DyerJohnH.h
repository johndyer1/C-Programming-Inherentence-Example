#ifndef DYERJOHNH_H  //If the compiler has already defined this header file, this line keeps it from repeating the process.
#define DYERJOHNH_H  //Puts DYERJOHNHMONEY_H on a list to indicate that it has been seen and allows compiler to skip over rest of file to #endif
#include <iostream>  //Allows user to interact with console with text



using namespace std;  //Uses universal standard namespace since only one programmer wrote it and it is not long

	class Shape  //Base class for Circle and Rectangle
	{
	public:
		Shape();  
		//Pre-condition: none
		//Post-condition: A constructor object with "" for name is given.
		Shape(string name); 
		//Pre-condition: none
		//Post-condition: A constructor object with parameter name is given.
		string getName();
		//Pre-condition: Referencing a Shape object.
		//Post-condition: Name of the object is given.
		void setName(string newName);
		//Pre-condition: Referencing a Shape object.
		//Post-condition: New name for the object is set.
		virtual double getArea() = 0;
		//Pre-condition: Referincing a shape.
		//Post-condition: Returns 0 to indicate that the shape is not defined.

	private:
		string name; //Holds name value of the string.
	};
	

	class Circle : public Shape  //Derived Shape class for a Circle object
	{
	public:
		Circle();
		//Pre-condition: none.
		//Post-condition: New object is named "Circle"
		Circle(int theRadius);
		//Pre-condition: none
		//Post-condition: New object is named "Circle" and given a radius
		void setRadius(int newRadius);
		//Pre-condition: Referencing a Circle object.
		//Post-condition: New radius is set for the object.
		double getRadius();
		//Pre-condition: Referencing a Circle object.
		//Post-condition: New name of the object is given.
		virtual double getArea();
		//Pre-condition: Referencing a Circle object.
		//Post-condition: Area following formula of 3.14159*radius*radius is given back

	private:
		int radius;  //Holds radius value for the object
	};


	class Rectangle : public Shape  //Derived Shape class for a Rectangle object
	{
	public:
		Rectangle();  
		//Pre-condition: none.
		//Post-condition: New object is named "Rectangle"
		Rectangle(int width, int height);
		//Pre-condition: none
		//Post-condition: New object is named "Rectangle" and given a width and height set by parameters.
		void setWidth(int newWidth);
		//Pre-condition: Referencing a Rectangle object.
		//Post-condition: New width is set for object.
		void setHeight(int newHeight);
		//Pre-condition: Referencing a Rectangle object.
		//Post-condition: New height is set for object.
		double getWidth();
		//Pre-condition: Referencing a Rectangle object.
		//Post-condition: Width of referenced object is returned.
		double getHeight();
		//Pre-condition: Referencing a Rectangle object.
		//Post-condition: Height of referenced object is returned.
		virtual double getArea();
		//Pre-condition: Referencing a Rectangle object.
		//Post-condition: Area following formula width*height is returned.

	private:
		int width;  //Holds width value for the object
		int height;  //Holds height value for the object
	};


#endif  //Token that indicates the end of the header file and point to skip to for the compiler