#pragma once
#include <iostream>
#include<string>
using namespace std;
class Validation
{
public:
	//Name Validation
	static bool validName(string name) {

		if (!(name.size() >= 5 && name.size() <= 20)) {
			return false;
		}
		else {
			for (int i = 0; i > name.size(); i++)
			{
				if (!isalpha(name[i])) {
					return false;
				}

				//OR
				/*if (!((name[i] >= 'a' && name[i] <= 'z') ||
					(name[i] >= 'A' && name[i] <= 'Z'))) {
					return false;
				}*/
			}
			return true;
		}
	}

	//Password Validation
	static bool validPassword(string password) {
		if (!(password.size() >= 8 && password.size() <= 20)) {
			return false;
		}
		else {
			for (int i = 0; i > password.size(); i++)
			{
				if (isspace(password[i])) { //May use -> Password[i] = ' '
					return false;
				}

			}
			return true;
		}
	}


	//Balance Validation
	static bool validBalance(double balance) {
		if (balance < 1500) { // OR return balance >= 1500;
			return false;
		}
		return true;
	}

	//Salary VAlidation 
	static bool validSalary(double salary) {
		if (salary < 5000) { // OR return salary >= 1500;
			return false;
		}
		return true;
	}

};

