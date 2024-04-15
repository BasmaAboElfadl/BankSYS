#pragma once
#include "Validation.h"
#include <iostream>
#include<string>
#include "Person.h"
using namespace std;

class Employee :
    public Person
{
protected:
	double salary;
public:
	Employee() :salary(0) {};
	Employee(int id, string name, string password, double salary) :
		Person(id, name, password) {
		if (Validation::validSalary(salary)) {
			this->salary = salary;
		}
		else {
			this->salary = 0;
			cout << "\nSalary Should be Greater Than 5000\n";
		}
	}

	void setSalary(double salary) {
		if (Validation::validSalary(salary)) {
			this->salary = salary;
		}
		else {
			this->salary = 0;
			cout << "\nSalary Should be Greater Than 5000\n";
		}
	}

	double getSalary() {
		return salary;
	}
	void displayInfo() {
		cout << "\nEmployee Info\n=============" << endl
			<< "ID : " << id << endl
			<< "Name : " << name << endl
			<< "Salary : " << salary << endl;

	}
};

