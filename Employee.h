#pragma once
#include "Validation.h"
#include <iostream>
#include<string>
#include "Person.h"
#include<vector>
#include"Client.h"
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
	void addClient(Client& client) {
		allClients.push_back(client);
	}
	//make search with iterator
	Client* searchClient(int id) {
		for (clientIt = allClients.begin(); clientIt != allClients.end(); clientIt++) {
			if (clientIt->getID() == id) {
				return clientIt._Ptr;
			}
		}
		return NULL;
	}
	void listClient() {
		for (clientIt = allClients.begin(); clientIt != allClients.end(); clientIt++) {
			clientIt->displayInfo();
		}
	}
	void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPassword(password);
		searchClient(id)->setBalance(balance);
	}
};
static vector<Employee> allEmployees;
static vector<Employee>::iterator employeeIt;

