#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct car_t
{
	string make;
	string model;
	int year;
	int mileage;
	int price;
	int uuid;
};

int main()
{
	string dealership = "Kordas Auto Mall";
	string instring;
	int inint;
	int inventory_size=0;
	int loop_var;
	int x;
	car_t* list;
	car_t* temp;

	cout << "Welcome to the " << dealership << " inventory system!\n";

	while(1)
	{
		cout << "What would you like to do?\n1- Add a vehicle\n";
		cout << "2- View Inventory\n3-Remove a vehicle\n4- Exit\n";
		cin >> inint;
		switch(inint)
		{
			case 1:
			//add a vehicle code goes here
				cout << "Ok, let's add a vehicle!\n";
				temp = new car_t[inventory_size+1];
				for(x=0; x<inventory_size; x++)
				{
					temp[x].year=list[x].year;
					temp[x].make=list[x].make;
					temp[x].model=list[x].model;
					temp[x].mileage=list[x].mileage;
					temp[x].uuid=list[x].uuid;
				}
				if(inventory_size>0)
				{
					delete[] list;
				}
				list=temp;
				cout << "Enter the year of manufacture:\n";
				cin >> inint;
				list[inventory_size].year=inint;
				cout << "Enter the make of the car:";
				cin >> list[inventory_size].make;
				cout << "Enter the model of the car:";
				cin >> list[inventory_size].model;
				cout << "Enter the mileage on the odometer:\n";
				cin >> inint;
				list[inventory_size].mileage=inint;
				list[inventory_size].uuid=rand()%10000;
				inventory_size++;
				cout << "Vehicle successfully added!\n";
                		break;
			case 2:
			//view inventory code goes here
				cout << "Here's what we've got!\n";
				cout << "Year\t\tMake\t\tModel\t\t";
				cout << "Mileage\t\tStock No.\n";
				for(loop_var=0; loop_var<inventory_size;
					loop_var++)
				{
					cout << list[loop_var].year << "\t\t";
					cout << list[loop_var].make << "\t\t";
					cout << list[loop_var].model << "\t\t";
					cout << list[loop_var].mileage << "\t\t";
					cout << list[loop_var].uuid << "\n";
				}
				break;
			case 3:
			//remove vehicle code goes here
				cout << "Enter the Stock Number of the car to remove:\n";
				cin >> inint;
				int bump;
                		for(loop_var=0;loop_var<inventory_size;
					loop_var++)
				{
					if (list[loop_var].uuid == inint)
					{
						bump=loop_var;
					}
				}
				for(loop_var=bump;loop_var<inventory_size-1;
					loop_var++)
				{
					list[loop_var].year=list[loop_var+1].year;
					list[loop_var].make=list[loop_var+1].make;
					list[loop_var].model=list[loop_var+1].model;
					list[loop_var].mileage=list[loop_var+1].mileage;
					list[loop_var].uuid=list[loop_var+1].uuid;
				}
				inventory_size--;
				break;
			case 4:
				goto end;
				break;
			default:
				cout << "That isn't a valid option. Try again?\n";
				break;
		}
	}
	end:
	cout << "Thanks for using the "<<dealership<<" inventory system!\n";
	delete[] list;
}
