#ifndef PATIENT_H
#define PATIENT_H
#include <string>
using namespace std;

class Patient 
{
	private:
		//Declare Attributes
		string fmlname;
		string address;
		string pnumber;
		string emcontact;
	public:
		//Constructor1 deligation of constructor 2
		Patient() :Patient("", "", "", "")
		{}

		//constructor 2
		Patient(string name, string addrs, string phone, string emrgnc)
		{
			fmlname = name;
			address = addrs;
			pnumber = phone;
			emcontact = emrgnc;
		}
		
		//Mutators
		void set_fmlname(string name)
		{
			fmlname = name;
		}

		void set_address(string addrs)
		{
			address = addrs;
		}

		void set_pnumber(string phone)
		{
			pnumber = phone;
		}

		void set_emcontact(string emrgnc)
		{
			emcontact = emrgnc;
		}

		//Accessors
		string get_fmlname() const
		{
			return fmlname;
		}

		string get_address() const
		{
			return address;
		}

		string get_pnumber() const
		{
			return pnumber;
		}

		string get_emcontact() const
		{
			return emcontact;
		}
};
#endif // !PATIENT_H
