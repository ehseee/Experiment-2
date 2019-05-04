// Problem 7 //

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{

	int input, num, summation;	

	cout << "Enter a number: ";
	cin >> num;
 
 	while (num>0)
	{
		summation = 0;
		
	for (input=1; input<=num; input++)
	{
		summation+=input;
	}
		cout << "The sum of all whole numbers from 1 to " << num << " is " << summation << "." << endl;
		cout << "Enter a number: ";
		cin >> num;	
	}
	
cout << "Thank you!";
	
	_getch();
	return 0;
}
