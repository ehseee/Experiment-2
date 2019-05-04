// Problem 2 //

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int water, late;
	water=35;
	late=20;
	
	float gallons, unpaidBal, waterBill, consumption;
	consumption = 1.10;
	
	cout << "WELCOME TO MARIANO'S WATER COMPANY!" << endl; 
	cout << "Feel free to avail our services! \n" << endl;
	cout << "------------------------------- \n" << endl;
	cout << "Enter number of gallons used: " ; 
	cin >> gallons;
	cout << "Enter unpaid balance from last month: Php " ;
	cin >> unpaidBal;
	
	waterBill = (water+(gallons*consumption));
	
	if (unpaidBal > 0)
	{
	    cout <<"YOUR TOTAL BILL IS: Php "<< (waterBill + late) << endl;	
	}
	else
	{
		cout<<"YOUR TOTAL BILL IS: Php " << waterBill << endl;
	}
		cout << "------------------------------- \n" << endl;
		cout << "Thank you, Next! \n";
	
	_getch ();
	return 0;
}

