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
        Client client;
        client.setID(stoi(tokens[0]));
        client.setName(stoi(tokens[1]));
        client.setPassword(stoi(tokens[2]));
        client.setBalance(stoi(tokens[3]));
        return client;
    }

    // Parse a string line into an Employee object
    static Employee parseToEmployee(string line)
    {
        vector<string> tokens = split(line);
        Employee employee;
        employee.setID(stoi(tokens[0]));
        employee.setName(stoi(token[1]));
        employee.setPassword(stoi(tokens[2]));
        employee.setSalary(stoi(tokens[3]));
        return employee;
    }

    // Parse a string line into an Admin object
    static Admin parseToAdmin(string line) 
    {
        vector<string> tokens = split(line);
        Admin admin;
        admin.setID(stoi(tokens[0]));
        admin.setName(stoi(tokens[1]));
        admin.setPassword(stoi(tokens[2]));
        admin.setSalary(stoi(tokens[3]));
        return admin;
    }
};

