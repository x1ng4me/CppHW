#include <iostream>        
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Customer
{
public:
	Customer(string firstname = "Noname", string surname = "Noname", int phone_number = 0) : firstname_(firstname), surname_(surname), phone_number_(phone_number)
	{ }
	Customer(const Customer& p) : firstname_(p.firstname_), surname_(p.surname_), phone_number_(p.phone_number_)
	{ }
	~Customer()
	{ }

	void read()
	{
		cin.get();
		cout << "Please type the first name of this person: ";
		getline(cin, this->firstname_);
		cout << endl << "Please type the surname of this person: ";
		getline(cin, this->surname_);
		cout << endl << "Please type the phone number of this person" << endl;
		cin >> this->phone_number_;
	}

	void display()
	{
		cout << endl << this->firstname_ << " " << this->surname_ << " :" << this->phone_number_ << endl;
	}

	void write_tofile()
	{
		ofstream fout(this->firstname_ + this->surname_ + "data.txt");
		fout << this->firstname_ << "," << this->surname_ << "," << this->phone_number_ << endl;
		fout.close();
	}

	int search_by_surname(string surname)
	{
		int have_data = 0;
		if (surname == this->surname_)
		{
			have_data = 1;
		}
		return have_data;
	}


private:
	string firstname_ = "Noname";
	string surname_ = "Noname";
	int phone_number_ = 0;
};

int main()
{
	cout << "How many people are there?" << endl;
	int num;
	cin >> num;
	Customer *directory = new Customer[num];    // reserve space for customer
	for (int i = 0; i < num; i++)
	{
		directory[i].read();
	}
	for (int i = 0; i < num; i++)
	{
		directory[i].display();
		directory[i].write_tofile();
	}
	string searchname;
	int pass = 0;
	char input;
	while (pass == 0)
	{
		cout << "enter a surname you want to search: " << endl;
		cin.get();
		getline(cin, searchname);
		for (int i = 0; i < num; i++)
		{
			if (directory[i].search_by_surname(searchname) == 1)
				directory[i].display();
		}
		cout << "Do you want to search for the other guy? Enter Y or N" << endl;
	node:
		cin >> input;
		if (input == 'N')
			pass = 1;
		else if (input != 'Y')
		{
			cout << "Input Error, please Enter Y or N" << endl;
			goto node;
		}
	}

	system("pause");
	return 0;
}
