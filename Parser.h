#pragma once
#include <vector>
#include <string>
#include <sstream>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
class Parser
{
public:
    // Split a string line into tokens based on comma delimiter
    static vector<string> split(string line) {
        vector<string> tokens;
        stringstream ss(line);
        string token;
        while (getline(ss, token, ',')) 
        {
            tokens.push_back(token);
        }
        return tokens;
    }

    // Parse a string line into a Client object
    static Client parseToClient(string line) {
        vector<string> tokens = split(line);
        if (tokens.size() == 4) {
            int id = stoi(tokens[0]);
            string name = tokens[1];
            string password = tokens[2];
            double balance = stod(tokens[3]);
            return Client(id, name, password, balance);
        }
        else
        {
            // Handle error or return default Client
            return Client();
        }
    }

    // Parse a string line into an Employee object
    static Employee parseToEmployee(string line)
    {
        vector<string> tokens = split(line);
        if (tokens.size() == 4) {
            int id = stoi(tokens[0]);
            string name = tokens[1];
            string password = tokens[2];
            double salary = stod(tokens[3]);
            return Employee(id, name, password, salary);
        }
        else {
            // Handle error or return default Employee
            return Employee();
        }
    }

    // Parse a string line into an Admin object
    static Admin parseToAdmin(string line) 
    {
        vector<string> tokens = split(line);
        if (tokens.size() == 4) {
            int id = stoi(tokens[0]);
            string name = tokens[1];
            string password = tokens[2];
            double salary = stod(tokens[3]);
            return Admin(id, name, password, salary);
        }
        else {
            // Handle error or return default Admin
            return Admin();
        }
    }
};

