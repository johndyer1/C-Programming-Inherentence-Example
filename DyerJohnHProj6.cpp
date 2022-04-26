/*
 * This is covering inheritance of class types
 *
 * Author: John Dyer
 * Version: 07/24/2021
 * 
 */


#include "DyerJohnH.h"  //Includes the header file that has the declarations of every function
#include <iostream>  //Used to communicate with the console through typing


using namespace std; //Uses universal standard namespace since only one programmer wrote it and it is not long

int main()  //Main function ran when the program first compiles
{
	Circle c(2);  //Creates circle object "c" that has a radius of 2
	cout << c.getName() << " has radius " <<  //User recieves all information about the object "c" that they created
		c.getRadius() << " and area " <<
		c.getArea() << endl;

	Rectangle r(3, 4);  //Creates rectangle object "r" that has width 3 and height 4
	cout << r.getName() << " has width " <<  //User recieves all information about the object "r" that they created
		r.getWidth() << ", height " <<
		r.getHeight() << ", and an area of " <<
		r.getArea() << endl;

	//Section below is only to test program more rigorously with different values for a rectangle class.  Values can be negative in case it is on a grid and calculations require it
	int width,   //Holds user-entered width
		height;  //Holds user-entered height
	cout << "Enter the rectangle's width: ";   //Prompts user to enter width for rectangle "a"
	cin >> width; //Width value to be put in rectangle "a"
	cout << "Enter the rectangle's height: ";  //Prompts user to enter height for rectangle "a"
	cin >> height;  //Height value to be put in rectangle "a"
	Rectangle a(width, height);  //Rectangle "a" is constructed with the user-entered values
	cout << a.getName() << " has width " <<  //User receives all information about the rectangle that they have created
		a.getWidth() << ", height " <<
		a.getHeight() << ", and an area of " <<
		a.getArea() << endl;

	//Section below is to test the functionality of "set" type functions
	cout << "Enter new value for rectangle's width: ";  //Prompts user to enter new width.
	cin >> width;  //New width is entered into variable.
	cout << "Enter new value for rectangle's height: ";  //Prompts user to enter new height.
	cin >> height;  //New height is entered.
	a.setWidth(width);  //Sets a's width to new user-entered width
	a.setHeight(height);  //Sets a's heigth to new user-entered height
	cout << a.getName() << " has width " <<  //User receives all information about the rectangle that they have changed
		a.getWidth() << ", height " <<
		a.getHeight() << ", and an area of " <<
		a.getArea() << endl;


	return 0; //Ends main function by returning a 0 value
}
