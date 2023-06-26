#ifndef PROCEDURE_H
#define PROCEDURE_H
#include<string>
using namespace std;

class Procedure
{
	private:
		//Attributes
		string prcdrname;
		string date;
		string practitioner;
		double charge;
	public:
		//Accessor that initializes all attributes
		Procedure(string pname, string dte, string prctnr, double chrg)
		{
			prcdrname = pname;
			date = dte;
			practitioner = prctnr;
			charge = chrg;
		}

		//Mutators
		void set_prcdrname(string pname)
		{
			prcdrname = pname;
		}
		void set_date(string dte)
		{
			date = dte;
		}
		void set_practitioner(string prctnr)
		{
			practitioner = prctnr;
		}
		void set_charge(double chrg)
		{
			charge = chrg;
		}

		//Accessors
		string get_prcdrname() const
		{
			return prcdrname;
		}
		string get_date() const
		{
			return date;
		}
		string get_practitioner() const
		{
			return practitioner;
		}
		double get_charge() const
		{
			return charge;
		}
};

#endif