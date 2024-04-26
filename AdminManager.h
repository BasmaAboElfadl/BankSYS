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
#include <Client.cpp>
#include"EmployeeManager.h"

class AdminManager{
public:
	static void printClientMunu() {
		EmployeeManager::printClientMenu();
	}
	static Client* login(int id, string password) {
		EmployeeManager::login(id, password);
	}

};

