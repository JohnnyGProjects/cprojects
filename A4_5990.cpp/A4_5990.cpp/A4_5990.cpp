// Name: Johnnyc/c++project
#include <iostream>

// MY_PI is a global constant variable so it can be accessed by all the functions
const double MY_PI = 3.14159;
double calcAreaCircle(double radius) {
	//calcuating the area of a cube
	double areaCircle = MY_PI * radius * radius;
	return areaCircle;
}
double calcVolCylinder(double radius, double height) {
	//calcuating the volume of a cylinder
	double volumeCyl = calcAreaCircle(radius)*height;
	return volumeCyl ;
}
double calcVolCube(double length) {
	//calcuation for determining the volume of a cube
	double volumeCube = (double)length * length * length;
	return volumeCube;
}
double myAbs(double origVal) {
	//algothrim for taking the absolute value of the input
	double newVal = 0;
	if (origVal <0) {
	 newVal = origVal * -1;
	 //newVal = abs(origVal);
	}
	else {
		newVal = origVal;
	}
	return newVal;
}
int simpleRound(double roundnum) {
 //  double round= (int)(d + 0.5);
//algothrim that take the value of input then casts it
   return (int)(roundnum + 0.5);
}
int main() {
	// Giving the variables an inital value
	//initalizing variables
	double radius = 1.0;
	double height = 2.0;
	double length = 3.0;
	double origVal = 0.0;
	double roundnum = 69.8;
	//double roundnum2 = 0.5;
	//double roundnum3 = 1.1;
	printf("\nPlease enter a non whole number:\n");
	//storing the input into the variables
	scanf_s("%lf", &roundnum);
	printf("The rounded value for %f is %d", roundnum, simpleRound(roundnum));
	//printf("The rounded value for %f is %d", roundnum2, simpleround(roundnum2));
	//printf("The rounded value for %f is %d", roundnum3, simpleround(roundnum3));
	
	//Prompting for user input
	printf("\nPlease enter a radius a height and length for the shapes:\n");
	//storing the input into the variables
	scanf_s("%lf", &radius);
	scanf_s("%lf", &height);
	scanf_s("%lf", &length);
	//stating the user input and calcuation by calling each function
	printf("The circle of radius %lf has area %lf\n", radius,  calcAreaCircle (radius));
	printf("The cylinder of radius %lf and height %lf has volume %lf\n", radius, height, calcVolCylinder(radius,height));
	printf("The cube of length %lf has volume %lf\n", length, calcVolCube(length));
	printf("\n Now, enter a number that is positive or negative:\n");
	scanf_s("%lf", &origVal);
	printf("The value you placed %lf and its absolute value %lf", origVal, myAbs(origVal));
	return 0;
}