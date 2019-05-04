// Problem 4 //

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float a, b, c;
	
	cout << "Enter first number: " << endl;
	cin >> a;
	cout << "Enter second number: " << endl;
	cin >> b;
	cout << "Enter third number: " << endl;
	cin >> c;
	
	if (a>=b && a>=c)
	{
	cout << "The largest number is: " << a << endl;
	}
	
	if (b>=a && b>=c)
	{
	cout << "The largest number is: " << b << endl;
	}
	
	if (c>=a && c>=b)
	{
	cout << "The LARGEST number is: " << c << endl;
	}
	
	_getch ();
	return 0;

}
