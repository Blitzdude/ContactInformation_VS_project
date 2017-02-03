#include "ContactInfo.h"
#include <map>
#include <iostream>

ContactInfo::ContactInfo
	(std::string name, std::string phoneNum, std::string email) :
	_name(name), _phoneNum(phoneNum), _email(email) {}


ContactInfo::~ContactInfo() {}

void ContactInfo::addContactInfo() {
}

void ContactInfo::print() {
	std::cout << "name: " << _name << ", Phone Number: "
			  << _phoneNum << ", email: " << _email << std::endl;
}

void ContactInfo::findContactInfo() {

}