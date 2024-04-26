#pragma once
#include<iostream>
using namespace std;
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include<vector>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "FilesHelper.h"
#include "FileManager.h"
#include "DataSourceInterface.h"
#include "Person.h"
#include "Validation.h"
#include <utility>

class ClientManger{
public:

	static void printClientMenu() {
		cout << "1-Deposit\n";
		cout << "2-Withdraw\n";
		cout << "3-Transfer to\n";
		cout << "4-Check Balance\n";
		cout << "5-Account Info\n";
	}
	static void updatePassword(Person* person) {
		string newPassword;
		person->setPassword(newPassword);
	}

	static Client* login(int id, string password) {
		for (clientIt = allClients.begin(); clientIt != allClients.end(); clientIt++) {
			if (clientIt->getID() == id && clientIt->getPassword() == password) {
				cout << "Hello\n"; ///// /مش عارفة مفروض ايه الي يتنفذ هنا :)
			}
		}
		return NULL;
	}
	
	static bool clientOptions(Client client) {
		double amount;
		int num;
		Client anotherClient;
		switch (num){
		case 1:client.deposit(amount);
			break;
		case 2:client.withdraw(amount);
			break;
		case 3:client.tranfertToAnother(anotherClient, amount);
			break;
		case 4:client.checkBalance();
			break;
		case 5:client.displayInfo();
			break;
		}

	}

};