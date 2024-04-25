#pragma once
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include<string>
#include<vector>
#include"Parser.h"
using namespace std;
class FilesHelper
{
public:
	// Save the last ID to a file
	static void saveLast(string lastIdfile, int id)
	{
		ofstream file(lastIdfile);
		file.open(lastIdfile);
		file << id;
		file.close();
	}
	// Get the last ID from a file
	static int getLast(string lastIdfile)
	{
		ifstream file(lastIdfile);
		int id;
		ifstream file;
		file.open(lastIdfile);
		file >> id;
		return id;
		
	}
	// Save a client to a file
	static void saveClient(Client c)
	{
		int id = getLast("Client_lastId.txt");
		ofstream file;
		file.open("Client.txt", ios::app);
		file << id + 1 << ',' << c.getName() << ',' << c.getPassword() << ',' << c.getBalance() << '\n';
		file.close();
		saveLast("Client_lastId.txt", id + 1);
	}
	// Save an employee to a file
	static void saveEmployee(string dataFile , string lastIdfile , Employee e)
	{
		int id = getLast(lastIdfile);
		ofstream file;
		file.open(dataFile, ios::app);
		file << id + 1 << ',' << e.getName() << ',' << e.getPassword() << ',' << e.getSalary() << '\n';
		file.close();
		saveLast(lastIdfile, id + 1);
	}

	// Get clients from file
	static void getClients()
	{
		ifstream file;
		string line;
		file.open("Client.txt");
		while (getline(file,line))
		{
			allClients.push_back(Parser::parseToClient(line));
		}
		file.close();
	}
	// Get employees from file
	static void getEmployees()
	{
		ifstream file;
		string line;
		file.open("Employee.txt");
		while (getline(file , line))
		{
			allEmployees.push_back(Parser::parseToEmployee(line));
		}
		file.close();
	}
	// Get admins from file
	static void getAdmins()
	{
		ifstream file;
		string line;
		file.open("Admin.txt");
		while (getline(file , line))
		{
			allAdmins.push_back(Parser::parseToAdmin(line));
		}
		file.close();
	}
	// Clear a file and reset last ID
	static void clearFile(string fileName, string lastIdFile)
	{
		ofstream file , zeroId;
		file.open(fileName, ios::trunc);
		file.close();
		zeroId.open(lastIdFile);
		zeroId << 0;
		zeroId.close();
	}
};

