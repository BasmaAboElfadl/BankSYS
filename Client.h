#pragma once
#include "Validation.h"
#include <iostream>
#include<string>
#include "Person.h"
#include<vector>
using namespace std;

class Client :
    public Person
{
private:
	double balance;
	vector<Client> clients; // Vector to store clients managed by the employee
public:
	//Default Constructor
	Client() :balance(0) {};
	//Parameterized Constructor
	Client(int id, string name, string password, double balance) :
		Person(id, name, password) {
		if (Validation::validBalance(balance)) {
			this->balance = balance;
		}
		else {
			this->balance = 0;
			cout << "\nBalance Should be Greater Than 1500\n";
		}
	};
	//setters
	void setBalance(double balance) {

		if (Validation::validBalance(balance)) {
			this->balance = balance;
		}
		else {
			this->balance = 0;
			cout << "\nBalance Should be Greater Than 1500\n";
		}
	}
	double getBalance() {
		return balance;
	}
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
		}
		else {
			cout << "\nAmount Must be greater than Zero\n";
		}
	}
	void withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
		}
		else {
			cout << "\nAmount Must be lower than Balance\n";
		}
	}
	void tranfertToAnother(Client& client, double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			client.deposit(amount);
		}
		else {
			cout << "\nAmount Must be lower than Balance\n";
		}
	}
	void displayInfo() {
		cout << "\nClient Info\n===========" << endl
			<< "ID : " << id << endl
			<< "Name : " << name << endl
			<< "Balance : " << balance << endl;
	}
	//to add clients
	void addClient(Client& client)
	{
		clients.push_back(client);
	}
	// Search for a client by ID
	Client* searchClient(int id)
	{
		for (auto& client : clients)
		{
			if (client.getID() == id)
			{
				return &client;
			}
		}
		return nullptr;
	}
	// List all clients managed by the employee
	void listClient()
	{
		cout << "clients managed by this employee: " << endl;
		for (auto& client : clients)
		{
			cout << "ID: " << client.getID() << ", Name: " << client.getName() << ", Balance: " << client.getBalance() << endl;
		}
	}
	// Edit client details identified by ID
	void editClient(int id, string name, string password, double balance)
	{
		for (auto& client : clients)
		{
			if (client.getID() == id)
			{
				client.setName(name);
				client.setPassword(password);
				client.setBalance(balance);
				return;
			}
		}
		cout << "client with ID: " << id << " is not found." << endl;
	}

};
static vector<Client> allClients;
static vector<Client>::iterator clientIt;

