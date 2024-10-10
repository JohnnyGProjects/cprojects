	#include "stdio.h"
	// Name: JohnnyCproject
	int main()
	{//initializing variables
		int idvar2 = 0;
		int idvar4 = 0; 
		int  thirddigit, firstdigit = 0;
		//creating array of digits to checking for divisibility
		int iddigits[4] = { 8,1,3,1 };
		int idVar = 8131;
		//finding digits for 2nd and 4th digit
		if ((idVar / 100 % 10)||(idVar%10)) {
			 idvar2=1;
			  idvar4=1;
		}
		//algorthim to find the 3rd digit
			int quiotent = idVar / iddigits[2];
		int subval = quiotent * iddigits[2];
		//check for remainder
		if (idVar % iddigits[2] > 0) {
			 thirddigit = subval / quiotent;
		} 
		//algorthim to find 1st digit
		int q = idVar / iddigits[0];
		int subval2 = q * iddigits[0];
		if (idVar % iddigits[0] > 0) {
			 firstdigit = subval2 / q;
		}
		//printing the id and each digit 
		printf("Student ID %d has first digit %d has second digit %d has third digit %d and has fourth digit %d.\n", idVar, firstdigit, idvar2, thirddigit, idvar4);
		return 0;
	}