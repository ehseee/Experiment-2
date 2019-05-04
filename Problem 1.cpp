// Problem 1 //

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int hours, total, final, pA, pB, pC, hA, hB;
	pA=995; 
	pB=1495;
	pC=1995;
	
	char input;
	
	cout << "WELCOME TO MARIANO'S' INTERNET SERVICE PROVIDER!" << endl;
	cout << "Feel free to avail any of our existing packages! \n" << endl;
	cout << "PACKAGE A: Php 995 per month with 10 hours of access provided. \n >Additional hours are Php 20 per hour." << endl;
	cout << "PACKAGE B: Php 1495 per month with 20 hours of access provided. \n >Additional hours are Php 10 per hour." << endl;
	cout << "PACKAGE C: Php 1995 per month with unlimited access provided. \n" << endl;
	cout << "------------------------------- \n" << endl;		
	cout << "Pleace choose Package Subscription: "; cin >> input;


	switch (input)
	{
		case 'A':
		case 'a':
				
				cout << "Excess Hours Used: " ;
				cin>> hours;
				final = pA + (hours * 20);
				hA = 10 + hours;
				cout<< "Total Hours Used: " << hA << endl;
				cout<< "Total Monthly Bill: Php " << final << "\n" << endl; 
				break;
				

		
		case 'B':
		case 'b':
				
				cout << "Excess Hours Used: " ;
				cin >> hours;
				final = pB + (hours * 10);
				hB = 20 + hours;
				cout << "Total Hours Used: " << hB << endl;
				cout << "Total Monthly Bill: Php " << final << "\n" << endl;
				break; 


		case 'C':
		case 'c':
				
				final = pC;
				cout << "Total Monthly Bill: Php " << final << "\n" << endl; 
				
				break;
}
		cout << "------------------------------- \n" << endl;
		cout << "Thank you for Subscribing! \n" << "BYE! \n";
		
_getch ();		
return 0;
}

