#include "ContactInfo.h"
#include <map>
#include <iostream>


using namespace std;
int main() {

	map<string, ContactInfo> friendList;
	

	ContactInfo friend1 = { "Fred_Fucs", "1800-EATADICK", "fredfucs@assmail.org" };
	ContactInfo friend2 = { "Harry_Mason", "04003331234", "harrymason@whereissheryl.com" };
	ContactInfo friend3 = { "Bruce_Wayne", "+32550064523", "brucewayne@batman.com" };

	friendList.insert(make_pair(friend1.getName(), friend1));
	friendList.insert(make_pair(friend2.getName(), friend2));
	friendList.insert(make_pair(friend3.getName(), friend3));

	char input;
	bool quit = false;

	cout << "Welcome to your Contact information list!\n\n";

	while (quit != true) {
		cout << "What would you like to do? [(A)dd, (P)rint, (F)ind or (Q)uit]  > ";
		cin >> input;
		
		// Print all contacts
		if (input == 'p' || input == 'P') { // print
			map<string, ContactInfo>::iterator map_it = friendList.begin();

			while (map_it != friendList.end()) {

				// map_it on pointteri, joten -> operaattori.
				map_it->second.print();		//(string, ContactInfo <--)
				map_it++;
			}
		}
		// Find contact using keyword
		else if (input == 'f' || input == 'F') { 
			string n;

			// ask the name of the friend to be found
			cout << "Give name: ";
			cin >> n;
			map<string, ContactInfo>::iterator map_it = friendList.find(n);

			// if friend not found
			if (map_it == friendList.end()) {
				cout << "\nNo friend with that name was found..." << endl;
			}
			// if found...
			else {
				cout << "Contact Information: ";
				map_it->second.print();
			}
		}

		// add contact information
		else if (input == 'a' || input == 'A') { 
			string c_name, c_phoneNum, c_email;

			// ask name
			cout << "Insert name: "; 
			cin >> c_name;
			cout << "\nInsert phone number: ";
			cin >> c_phoneNum;
			cout << "\nInsert email: ";
			cin >> c_email;

			ContactInfo *ptr = new ContactInfo(c_name, c_phoneNum, c_email);
			friendList.insert(make_pair(c_name, *ptr));
		}

		// quit application
		else if (input == 'q' || input == 'Q') { 
			cout << "Goodbye" << endl;
			quit = true;
		}
	}
	return 0;
}