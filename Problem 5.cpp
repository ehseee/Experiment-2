// Problem 5 //

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int count;
	
	cout << "Counting..." << endl;
	
	for (count=1; count <=10; count++)
	cout << count << ",";
	
	for (count=12; count <=30; count+=2)
	cout << count << ",";
	
	_getch ();
	return 0;
}
