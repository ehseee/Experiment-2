// Problem 9 //

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int r, c, rows, columns;
	char symbol='*';
	
	cout << "How many rows: ";
	cin >> rows;
	
	cout << "How many columns: ";
	cin >> columns;
	
		for (r=1; r<=rows; r++)
		{
			for (c=1; c<=columns; c++)
				{
					cout << "*";
				}
			cout << endl;
		}
		
_getch ();
return 0;
}
