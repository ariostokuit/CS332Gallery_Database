/*
* Ariosto Kuit and Tony Nyugen
* CS 332 Assignment #5
*
* Create an application that can access gallery database using C++.
* Application can print records from the DB, access and records based on attribute values
* Sort a report.
*/



#include <iostream>
#include <string>
using namespace std;

void displayOptions()
{
    cout << "1. Print record from the DB\n";
    cout << "2. Access an yrecord based on attribute values\n";
    cout << "3. Sort a report\n";
}

int main()
{
    int option;
    char input = 'n';

	do{
        displayOptions();
        cin >> option;

        switch(option)
        {
            case 1: break;
            case 2: break;
            case 3: break;
        }

        cout << "Would you like to select another option?(y/n): ";
        cin >> input;

    }while(input == 'y' || input == 'Y');

    return 0;
}