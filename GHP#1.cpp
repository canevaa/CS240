/*HEADER
Program to accept a list, and search the list for a specific Integer.
Demonstrates use of functions
Written by Aric J. Canevari
September 2014
Language: C++ (using g++ compiler on Linux environment 
*/

#include <iostream>    // needed for access to cin and cout
#include <cstring>	   // needed for access to string (may not be used)

//Function Prototypes
int LS(int l[], int ll, int it);

using namespace std;

int main(void) {
	int length;					//length of array
	int lookingfor;				//Takes in the int we want to find
	int a;						// used for output
	cout<<"Enter an integer for the length of the list to be entered \n";
	cin>> length;
	int list[length];			//array for holding integers of a user defined length
	for(int i=0;i<length;i++ ) {			// loop to populate the array
		cout<<"Enter an integer for spot "<< i << " of the list \n";
		cin >> list[i];
	}
	cout << endl<< "enter the integer that will be looked for \n";
	cin >> lookingfor;					 
	a = LS( list, length, lookingfor);   // calling function LS
	cout << a << endl;
	return 0;
}

int LS(int l[], int ll, int it) {
/*FUNCTION HEADER
Used to search through the array to find a specific integer returning a 1 or 0 depending on if its found
Original Written by Larry Nyhoff, "ADTs, Data Structures, and Problem Solving with C++" second Edition
taken from page 43, Number 4
Language: C++ (using g++ compiler on Linux environment 
taken September 2014
Edited by Aric J. Canevari 
September 2014
*/
	int f=0;
	for(int i=0; i < ll; i++){ //loop to search array
		if(l[i]==it){  			//if the integer is found it returns a 1
			f=1;
			return f;
		}
	}
	return f; 					// if the integer is not found a 0 is returned 
	
	
	/*A: if (l[i]==it)	//old code
		goto B;
	if (i==ll)	
		goto C;
	i++;
	goto A;
	B:f=1;
	C:return f;*/
}
