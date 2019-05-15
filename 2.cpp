#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
    int Number, M;

	cout << "" <<endl;
	cout << "Enter a Mutiplier: ";
	cin >> Number; 
	cout << "" <<endl;

	cout<< "Multiplication Table of " << Number << ":" << endl; 
	
	for (M=1; M<=10;M++)
	{
		cout << M << "*" << Number << " = " << Number*M << endl;
	}

	_getch();
	return 0;
}