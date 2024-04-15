#pragma once
#include <fstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include<string>
#include<vector>
using namespace std;
class FilesHelper
{
public:
	// Save the last ID to a file
	static void saveLast(string fileName, int id)
	{
		ofstream file(fileName);
		if (file.is_open())
		{
			file << id;
			file.close();
		}
	}
	// Get the last ID from a file
	static int getLast(string fileName)
	{
		ifstream file(fileName);
		int lastID = 0;
		if (file.is_open())
		{
			file >> lastID;
			file.close();
		}
		return lastID;
	}
	// Save a client to a file
	static void saveClient(Client c, string fileName)
	{
		ofstream file(fileName, ios::app);
		if (file.is_open())
		{
			file << c.getID() << " , " << c.getName() << " , " << c.getPassword() << " , " << c.getBalance() << endl;
			file.close();
		}
		else
		{
			cout << "Error: Unable to open file for saving client.\n";
		}
	}
	// Save an employee to a file
	static void saveEmployee(Employee e, string fileName)
	{
		ofstream file(fileName, ios::app);
		if (file.is_open())
		{
			file << e.getID() << " , " << e.getName() << " , " << e.getPassword() << " , " << e.getSalary() << endl;
			file.close();
		}
		else
		{
			cout << "Error: Unable to open file for saving employee.\n";
		}
	}
	// Save an admin to a file
	static void saveAdmin(Admin a, string fileName)
	{
		ofstream file(fileName, ios::app);
		if (file.is_open())
		{
			file << a.getID() << " , " << a.getName() << " , " << a.getPassword() << " , " << a.getSalary() << endl;
			file.close();
		}
		else
		{
			cout << "Error: Unable to open file for saving admin.\n";
		}
	}
	// Get clients from file
	static void getClients()
	{
		ifstream file("Client.txt");
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	// Get employees from file
	static void getEmployees()
	{
		ifstream file("Employee.txt");
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	// Get admins from file
	static void getAdmins()
	{
		ifstream file("Admin.txt");
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	// Clear a file and reset last ID
	static void clearFile(string fileName, string lastIdFile)
	{
		ofstream file(fileName);
		file.close();
		saveLast(lastIdFile, 0);
	}
};

