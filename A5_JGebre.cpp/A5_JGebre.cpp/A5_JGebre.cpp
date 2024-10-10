// Name: JohnnyCproject
#include <stdio.h>
#include <math.h>
#include <cassert>

// Prototypes
int simpleRound(double roundingval);
int isExactChange(unsigned int Priceofpenny);
unsigned int onescolumn(unsigned int sbNum);
unsigned int tenscolumn(unsigned int sbNum);
const char* superBowlConvertSmall(unsigned int sbNum);
const char* superBowlConvertLarge(unsigned int sbNum);
void superBowlPrinter(unsigned int sbNum);

int main() {
	double ogvalue = -8.4;
	printf("The original value %lf and the new value %i\n", ogvalue, simpleRound(ogvalue));
	// Test for simpleround function
	assert(simpleRound(2.5)==3);
	assert(simpleRound(-2.6)==3);
	assert(simpleRound(-6.2)==6);
	assert(simpleRound(5)==5);
	assert(simpleRound(11.2)==11);
	unsigned int pennyPrice = 120;
	printf("\nThe original price %u and the new price %i\n", pennyPrice, isExactChange(pennyPrice));
	// Test for isExactChange function
	assert(isExactChange(0)==true);
	assert(isExactChange(115)==true);
	assert(isExactChange(116)==false);
	assert(isExactChange(30)==true);
	assert(isExactChange(9218)==false);
    //placing hard values for superbowl function
   unsigned int input = 1;
    printf("\nEnter a year between 0-100\n");
    scanf_s("%u",&input);
    onescolumn(input);
     tenscolumn(input);
     superBowlPrinter(input);
    superBowlPrinter(100);
    superBowlPrinter(13);
    superBowlPrinter(24);
    superBowlPrinter(69);
    superBowlPrinter(8);
    superBowlPrinter(99);
    return 0;
}
int simpleRound(double roundingval) {
    //ternary statement checks if val is + or -
	return roundingval < 0 ? (int)(fabs(roundingval) + 0.5) : (int)(roundingval + 0.5);
}
int isExactChange(unsigned int Priceofpenny) {
    //ternary statement checks if pennyval is representable 
	return Priceofpenny % 5 == 0 ? 1 : 0;
}
unsigned int onescolumn (unsigned int sbNum) {
    //algothrim that divides user input for the one's digit
  return  sbNum % 10;
}
unsigned int tenscolumn (unsigned int sbNum) {
    //algothrim that divides user input for the ten's digit
return  (10 * (sbNum / 10));
}
const char* superBowlConvertSmall(unsigned int sbNum) {
    //switch statement to convert small numbers to roman numerals 
    switch (onescolumn(sbNum))
    {
    case 1: return "I";
    case 2: return "II";
    case 3: return "III";
    case 4: return "IV";
    case 5: return "V";
    case 6: return "VI";
    case 7: return "VII";
    case 8: return "VIII";
    case 9:  return "IX";
    default: return "";
    }
}
const char* superBowlConvertLarge(unsigned int sbNum) {
    //switch statement to convert large numbers to roman numerals 
    switch (tenscolumn(sbNum)){
     case 10: return "X";
     case 20: return "XX";
     case 30: return "XXX";
     case 40: return "XL";
     case 50: return "L";
     case 60: return "LX";
     case 70: return "LXX";
     case 80: return "LXXX";
     case 90: return "XC";
     case 100: return "C";
     default: return "";
}  
}
void superBowlPrinter(unsigned int sbNum) {   
    //priting the superbowl year
    printf("\nThis year %ith superbowl is %s%s\n", sbNum, superBowlConvertLarge(sbNum),
        superBowlConvertSmall(sbNum));
}
