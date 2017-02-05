#pragma once
#include <string>


class ContactInfo
{
public:
	ContactInfo(std::string name,
				std::string phoneNum,
				std::string email);

	~ContactInfo();
	void print();

	std::string getName() {
		return _name;
	}

	std::string getPhoneNum() {
		return _phoneNum;
	}

	std::string getEmail() {
		return _email;
	}

private:
	std::string _name;
	std::string _phoneNum;
	std::string _email;


};

