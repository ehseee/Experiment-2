// Problem 6 //

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, first, second, third;
	first = 0 ;
	second = 1 ;
	
	cout << "Fibonacci numbers:" << endl;
	
	for (int n=0; n<22; n++)
	{
		if (n<=1)
		third=n;
		else
		{
			third=first+second;
			first=second;
			second=third;
		}
		cout << third << ",";
	}

_getch ();	
return 0;
}
