#include <stdio.h>
// Name: JohnnyCproject

//globalvar so it can be accessed by all functions
const double MY_PI = 3.14159;
double diameter = 2;

double circlefunction(double radius) {
	//algorthim for calcuating area of a circle
	double areaCircle = MY_PI * radius * radius;
	return areaCircle;
}
double Cylinderfunction(double radius, double diameter) {
	//algorthim for calcuating volume of a cylinder
	double volumeCyl = (MY_PI * radius * radius * (diameter));
	return volumeCyl;
}
double spherefunction(double radius) {
	//algorthim for calcuating volume of a sphere
	int sphereVol = 4 / 3 * (int)MY_PI * (int)radius * (int)radius * (int)radius;
	return sphereVol;
}
double spherefunction2(double radius) {
	//algorthim for calcuating volume of a sphere
	int sphereVol2 = (int)(4 / 3 * MY_PI * radius * radius * radius);
	return sphereVol2;
}
double spherefunction3(double radius) {
	//algorthim for calcuating volume of a sphere
	double sphereVol3 = (4.0 / 3.0 * MY_PI * radius * radius * radius);
	return sphereVol3;
}

double cubefunction(double diameter) {

	//algorthim for calcuating volume of cube
	double cube = diameter * diameter * diameter;
	return cube;
}
int main() {
	//printf("Program");
	// double diameter = 3;
	double num1 = circlefunction(diameter / 2);
	double num2 = Cylinderfunction(diameter / 2, diameter);
	double num3 = spherefunction(diameter / 2);
	double num4 = spherefunction2(diameter / 2);
	double num5 = spherefunction3(diameter / 2);
	double num6 = cubefunction(diameter);

	printf("The area of the circle is %f\n", num1);
	printf("The area of the cylinder is %f\n", num2);
	printf("The volume of the first sphere is %d\n The volume of the second sphere is %d\n The volume of the third sphere is %f\n", (int) num3, (int) num4, num5);
	printf("The volume of the cube is %f\n", num6);
	return 0; 
}