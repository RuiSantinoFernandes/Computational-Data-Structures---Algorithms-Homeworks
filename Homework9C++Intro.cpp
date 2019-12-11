#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class ContactsBook {
	//data fields
private:
	string firstname;
	string lastname;
	string phone;
	string email;


	

public:
	//create contact
	 void createContact() {
		ofstream write;
		cout << "Enter a first name for contact:" << endl;
		cin >> firstname;
		cout << "Enter a last name for contact:" << endl;
		cin >> lastname;
		cout << "Enter a phone number:" << endl;
		cin >> phone;
		cout << "Enter an email:" << endl;
		cin >> email;

		write.open("contact.txt", ios::app);
		write << firstname << " " << lastname << " " << phone << " " << email << endl;
		write.close();
		 
		
	}
	void search() {

		ifstream read;
		string searchAname;
		string file;
		cout << "Enter a name to search:" << endl;
		cin >> searchAname;

		read.open("contact.txt");
		bool contactFind = false;

		while (getline(read, file)) {
			if (file.compare(0, searchAname.length(), searchAname) == 0) {
				cout << file << endl;
				contactFind = true;
				
			}
			
		}
		if (contactFind == false) {
			cout << "Contact not found" << endl;
		}

	}

	void Display() {
		ifstream read;
		read.open("contact.txt");
		string display;
		while (getline(read, display)) {
			cout << display << endl;


		}




	}
	
};

int main() {
	ContactsBook contact;
	contact.createContact();
	contact.search();
	contact.Display();
}