/*HEADER
Program to take in two matrix arrays and add them together into another array and display all of them. 
Written by Aric J. Canevari
September 2014
Language: C++ (using g++ compiler on Linux environment)
Version 1.0.0.0
*/

#include <iostream>    // needed for access to cin and cout
#include <cstring>     // needed for access to string (may not be used)

void printarray( int[5][5], int[5][5], int[5][5]);		//Prototype for a function that prints the arrays
void addarray( int[5][5], int[5][5]);					//Prototype for a function that adds the arrays together

using namespace std;

int main(void){
/*FUNCTION HEADER
Main function for initializing the arrays and passing them to the next function
Written by Aric J. Canevari
September 2014
Language: C++ (using g++ compiler on Linux environment)
Version 0
*/
	int array1[5][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int array2[5][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	addarray(array1,array2);
	return 0;
}

void addarray(int x[5][5], int y[5][5]){
/*FUNCTION HEADER
Adds the two arrays into a third array and passes all three arrays to the next function
Written by Aric J. Canevari
September 2014
Language: C++ (using g++ compiler on Linux environment)
Version 0
*/
	int z[5][5];
	for(int i=0;i<5;i++){		// nested loop to add each part of each array together
		for(int j=0; j<5;j++){
			z[i][j] = x[i][j] + y[i][j];
		}
	}	
	printarray(x,y,z);
}


void printarray( int x[5][5], int y[5][5], int z[5][5]){
/*FUNCTION HEADER
Prints the arrays
Written by Aric J. Canevari
September 2014
Language: C++ (using g++ compiler on Linux environment)
Version 0
*/
	cout<<"array 1:"<<endl;
	for(int i=0;i<5;i++){		//nested loops used to print out the three arrays
		for(int j=0; j<5;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"array 2:"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0; j<5;j++){
			cout<<y[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"array 1 + array 2:"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0; j<5;j++){
			cout<<z[i][j]<<" ";
		}
		cout<<endl;
	}
}
