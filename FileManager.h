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

class FileManager : public DataSourceInterface
{
        string CLIENT_FILE_PATH;
        string EMPLOYEE_FILE_PATH;
        string ADMIN_FILE_PATH;
private:
        FileManager(const string& clientFilePath, const string& employeeFilePath, const string& adminFilePath)
       : CLIENT_FILE_PATH(clientFilePath), EMPLOYEE_FILE_PATH(employeeFilePath), ADMIN_FILE_PATH(adminFilePath) {}
            
        void addClient(Client client)  {
            FilesHelper::saveClient(client);
        }

        void addEmployee(Employee employee)  {
            FilesHelper::saveEmployee("Employee.txt" , "Employee_lastId.txt");
        }

        void addAdmin(Admin admin) override {
            FilesHelper::saveEmployee("Admin.txt" , "Admin_lastId.txt");
        }

        void getAllClients() {
            FilesHelper::getClients();
       }

        void getAllEmployees() {
            FilesHelper::getEmployees();
        }

        void getAllAdmins() {
            FilesHelper::getAdmins();
        }

        void removeAllClients()  {
            FilesHelper::clearFile("Client.txt", "Client_lastId.txt");
        }

        void removeAllEmployees()  {
            FilesHelper::clearFile("Employee.txt", "Employee_lastId.txt");
        }

        void removeAllAdmins()  {
            FilesHelper::clearFile("Admin.txt", "Admin_lastId.txt");
        }

public:
    void getAllData() {
        getAllClients();
        getAllEmployees();
        getAllAdmins();
    }
    //to deleta all data in file ,then iterate vector
    void updateClient() {
        removeAllClients();
        for (clientIt = allClients.begin(); clientIt != allClients.end(); clientIt++) {
            addClient(*clientIt);
        }
    }
    void updateEmployee() {
        removeAllEmployees();
        for (employeeIt = allEmployees.begin(); employeeIt != allEmployees.end(); employeeIt++) {
            addEmployee(*employeeIt);
        }
    }
    void updateAdmin() {
        removeAllAdmins();
        for (adminIt = allAdmins.begin(); adminIt != allAdmins.end(); adminIt++) {
            addAdmin(*adminIt);
        }
    }

};

