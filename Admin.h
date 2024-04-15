#pragma once
#include "Validation.h"
#include <iostream>
#include<string>
#include "Employee.h"
#include<vector>
#include "Client.h"

using namespace std;

class Admin :
    public Employee
{
private:
	vector<Client*> clients;
	vector<Employee*> employees;
public:
	Admin() {};
	Admin(int id, string name, string password, double salary) :
		Employee(id, name, password, salary) {};

	void displayInfo() {
		cout << "\nAdmin Info\n==========" << endl
			<< "ID : " << id << endl
			<< "Name : " << name << endl
			<< "Salary : " << salary << endl;
	}
	// Add a client to the list of clients managed by the admin
	void addClient(Client& client) {
		clients.push_back(&client);
	}
	// Search for a client by ID
	Client* searchClient(int id) {
		for (auto& client : clients) {
			if (client->getID() == id) {
				return client;
			}
		}
		return nullptr;
	}
	// List all clients managed by the admin
	void listClient() {
		cout << "Clients managed by this admin:" << endl;
		for (auto& client : clients) {
			cout << "ID: " << client->getID() << ", Name: " << client->getName() << ", Balance: " << client->getBalance() << endl;
		}
	}
	// Edit client details identified by ID
	void editClient(int id, string name, string password, double balance) {
		for (auto& client : clients) {
			if (client->getID() == id) {
				client->setName(name);
				client->setPassword(password);
				client->setBalance(balance);
				return;
			}
		}
		cout << "Client with ID: " << id << " not found." << endl;
	}
	// Add an employee to the list of employees managed by the admin
	void addEmployee(Employee& employee) {
		employees.push_back(&employee);
	}
	// Search for an employee by ID
	Employee* searchEmployee(int id) {
		for (auto& employee : employees) {
			if (employee->getID() == id) {
				return employee;
			}
		}
		return nullptr;
	}
	// Edit employee details identified by ID
	void editEmployee(int id, string name, string password, double salary) 
	{
		for (auto& employee : employees)
		{
			if (employee->getID() == id)
			{
				employee->setName(name);
				employee->setPassword(password);
				employee->setSalary(salary);
				return;
			}
		}
		cout << "Employee with ID: " << id << " not found." << endl;
	}
	// List all employees managed by the admin
	void listEmployee()
	{
		cout << "Employees managed by this admin:" << endl;
		for (auto& employee : employees) 
		{
			cout << "ID: " << employee->getID() << ", Name: " << employee->getName() << ", Salary: " << employee->getSalary() << endl;
		}
	}
};

