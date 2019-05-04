// Problem 8 //

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a;
	
	cout << "Enter a number: "; 
	cin >> a;
	cout << "Multiplication table of: " << a << endl;
	
	for (int i=1; i<=10; ++i)
	{
		cout << a << " * " << i << " = " << (a*i) << endl;
	}
	
	_getch ();	
	return 0;

}
