#include "ContactInfo.h"
#include <map>
#include <iostream>

using namespace std;
int main() {

	map<string, ContactInfo> friendList;

	ContactInfo friend1 = { "Fred Fucs", "1800-EATADICK", "fredfucs@assmail.org" };
	ContactInfo friend2 = { "Harry Mason", "04003331234", "harrymason@whereissheryl.com" };
	ContactInfo friend3 = { "Bruce Wayne", "+32550064523", "brucewayne@batman.com" };

	friendList.insert(make_pair("Fred Fucs", friend1));
	friendList.insert(make_pair("Harry Mason", friend2));
	friendList.insert(make_pair("Bruce Wayne", friend3));

	bool quit = false;
	while (quit != true) {
		
	}
	return 0;
}