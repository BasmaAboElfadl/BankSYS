#pragma once
#include <iostream>
#include<string>
using namespace std;
#include"Validation.h"
class Person
{
protected:
	int id;
	string name, password;
public:

	//Defult Constructor
	Person() : id(0) {};
	//Paramitrized Constructor
	Person(int id, string name, string password) : id(id) {

		if (Validation::validName(name)) {
			this->name = name;
		}
		else {
			this->name = "This Name Is Not Valid";
		}

		if (Validation::validPassword(password)) {
			this->password = password;
		}
		else {
			this->password = "This Password Is Not Valid";
			cout << "\nThis Password Is Not Valid\n";
		}

	};

	//Setters
	void setName(string name) {
		if (Validation::validName(name)) {
			this->name = name;
		}
		else {
			this->name = "This Name Is Not Valid";

		}
	}
	void setPassword(string password) {
		if (Validation::validPassword(password)) {
			this->password = password;
		}
		else {
			this->password = "This Password Is Not Valid";
			cout << "\nThis Password Is Not Valid\n";
		}
	}
	void setID(int id) {
		this->id = id;
	}
	//Getters
	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	int getID() {
		return id;
	}


	//vitual pure to stop object creation 
	virtual void displayInfo() = 0;

};

