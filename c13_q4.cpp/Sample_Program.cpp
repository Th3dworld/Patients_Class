#include "Patient.h"
#include "Procedure.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	//Format numeric output
	cout << fixed << showpoint << setprecision(2);
	
	//Declare Variables
	Patient doe("John Doe", "6325, Pine Bluff, AR, 71807", "8702313322", "Jane Doe\n870123123");
	Procedure pocedure[3]{ Procedure("Physical Exam", "5/19/2023", "Dr. Irvine", 250.00), Procedure("X-Ray", "5/19/2023", "Dr. Jamison", 500.00),
		Procedure("Blood test", "5/19/2023", "Dr. Smith", 200.00) };
	//Procedure procedure_2("X-Ray", "5/19/2023", "Dr. Jamison", 500.00);
	//Procedure procedure_3("Blood test", "5/19/2023", "Dr. Smith", 200.00);

	//Display information to user
	cout << "Here is the requirement reports:\n";
	cout << "Patient name : " << doe.get_fmlname() << endl;
	cout << "Address: " << doe.get_address() << endl;
	cout << "Phone Number: " << doe.get_pnumber() << endl;
	cout << "Emergency contact: " << doe.get_emcontact() << endl << endl;
	
	//Display Procedures
	cout << "--------------------------------------------------------------------------------------------------\n";
	cout << setw(40) << left << "Procedure 1"  << setw(32) << left << "Procedure 2" << setw(12) << left << "Procedure 3" << endl;
	cout << "--------------------------------------------------------------------------------------------------\n";
	//Display Procedure name for all 3
	cout << "Procedure Name: " << pocedure[0].get_prcdrname() << setw(11) << " ";
	cout << "Procedure Name: " << pocedure[1].get_prcdrname() << setw(11) << " ";
	cout << setw(12) << left << "Procedure Name: " << pocedure[2].get_prcdrname() << endl;
	
	//Display Date for all 3 Procedures
	cout << "Date: " << pocedure[0].get_date() << setw(25) << " ";
	cout << "Date: " << pocedure[1].get_date() << setw(17)<< " ";
	cout << "Date: " << pocedure[2].get_date() << endl;

	//Display Practitioner for all 3 Procedures
	cout << "Practitioner: " << pocedure[0].get_practitioner() << setw(16) << " ";
	cout << "Practitioner: " << pocedure[1].get_practitioner() << setw(7) << " ";
	cout << "Practitioner: " << pocedure[2].get_practitioner() << endl;

	//Display cost for all 3 Procedures
	cout  << "Charge: $" << pocedure[0].get_charge() << setw(25) << " ";
	cout  << "Charge: $" << pocedure[1].get_charge() << setw(17) << " ";
	cout  << "Charge: $" << pocedure[2].get_charge() << endl;

	cout << "--------------------------------------------------------------------------------------------------\n";
	
	return 0;
}