#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	float FirstNumber, SecondNumber, ThirdNumber;
	cout << "---------------------------------------------------------" <<endl;
	cout << "                    LARGEST of them all!                " << endl;
	cout << "---------------------------------------------------------" <<endl;
	cout << "" << endl; 

	cout << "Enter First Number:   ";
	cin >> FirstNumber;
	cout << "" << endl; 

	cout << "Enter Second Number:  ";
	cin >> SecondNumber;
	cout << "" << endl; 

	cout << "Enter Third Number:  ";
	cin >> ThirdNumber;
	cout << "" << endl; 
	

	if (FirstNumber > SecondNumber)
	{
		if (FirstNumber > ThirdNumber)
		{
				cout << FirstNumber << " is the LARGEST of them all!\n";
		}
		else 
		{ 	cout << ThirdNumber << " is the LARGEST of them all!\n";
		}
	}
	else if (SecondNumber > ThirdNumber)
		cout << SecondNumber << " is the LARGEST of them all!\n";
	else 
		cout << ThirdNumber << " is the LARGEST of them all!\n";

	 
	
	_getch();
	return 0;

}




