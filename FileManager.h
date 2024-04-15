#pragma once
using namespace std;
#include<utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include<string>
#include "DataSourceInterface.h"
#include"FilesHelper.h"

class FileManager :
	public DataSourceInterface
{
        string CLIENT_FILE_PATH;
        string EMPLOYEE_FILE_PATH;
        string ADMIN_FILE_PATH;
    public:
        FileManager(const string& clientFilePath, const string& employeeFilePath, const string& adminFilePath)
       : CLIENT_FILE_PATH(clientFilePath), EMPLOYEE_FILE_PATH(employeeFilePath), ADMIN_FILE_PATH(adminFilePath) {}
            
        void addClient(Client client)  {
            FilesHelper::saveClient(client, "Client.txt");
        }

        void addEmployee(Employee employee)  {
            FilesHelper::saveEmployee(employee, "Employee.txt");
        }

        void addAdmin(Admin admin) override {
            FilesHelper::saveEmployee(admin, "Admin.txt");
        }

        vector<Client> getAllClients()  {
            vector<Client> clients;
            // Read clients from file and populate the vector
            return clients;
        }

        vector<Employee> getAllEmployees()  {
            vector<Employee> employees;
            // Read employees from file and populate the vector
            return employees;
        }

        vector<Admin> getAllAdmins()  {
            vector<Admin> admins;
            // Read admins from file and populate the vector
            return admins;
        }

        void removeAllClients()  {
            FilesHelper::clearFile("Client.txt", "LastClientId.txt");
        }

        void removeAllEmployees()  {
            FilesHelper::clearFile("Employee.txt", "LastEmployeeId.txt");
        }

        void removeAllAdmins()  {
            FilesHelper::clearFile("Admin.txt", "LastAdminId.txt");
        }
   

};

