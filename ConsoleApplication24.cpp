#include <iostream>
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

//int main()
//{
//    Client c(123, "baasmaaaaa", "!@#$%^&*(())", 239999);
//    FilesHelper::saveClient(c,"Client.txt");
//    
//    ifstream ClientFile("Client.txt");
//    if (ClientFile.is_open())
//    {
//        string line;
//        while (getline(ClientFile, line))
//        {
//            cout << line << endl;
//        }
//    }
//    ClientFile.close();
//
//}
// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main() {
     Client c(123, "baasmaaaaa", "!@#$%^&*(())", 239999);
    ofstream ClientFile("Client.txt");
    ClientFile.open("example.txt");
    ClientFile << "Writing this to a file.\n";
    ClientFile.close();
    return 0;
}

//
//int main() {
//        FileManager fileManager("Client.txt", "Employee.txt", "Admin.txt");
//
//        // Interactive menu for the user
//        cout << "Welcome to the management system!\n";
//        int choice;
//        do {
//            cout << "1. Add Client\n"
//                << "2. Add Employee\n"
//                << "3. Add Admin\n"
//                << "4. List Clients\n"
//                << "5. List Employees\n"
//                << "6. List Admins\n"
//                << "7. Exit\n";
//            cout << "Enter your choice: ";
//            cin >> choice;
//
//            switch (choice) {
//            case 1: {
//                // Add a new client
//                int id;
//                string name, password;
//                double balance;
//                cout << "Enter client details:\n";
//                cout << "ID: ";
//                cin >> id;
//                cout << "Name: ";
//                cin.ignore(); // Ignore newline character left by previous cin
//                getline(cin, name);
//                cout << "Password (at least 8 characters, no spaces): ";
//                getline(cin, password);
//                cout << "Balance (should be at least 1500): ";
//                cin >> balance;
//                Client client(id, name, password, balance);
//                fileManager.addClient(client);
//                break;
//            }
//            case 2: {
//                // Add a new employee
//                int id;
//                string name, password;
//                double salary;
//                cout << "Enter employee details:\n";
//                cout << "ID: ";
//                cin >> id;
//                cout << "Name: ";
//                cin.ignore();
//                getline(cin, name);
//                cout << "Password (at least 8 characters, no spaces): ";
//                getline(cin, password);
//                cout << "Salary (should be at least 5000): ";
//                cin >> salary;
//                Employee employee(id, name, password, salary);
//                fileManager.addEmployee(employee);
//                break;
//            }
//            case 3: {
//                // Add a new admin
//                int id;
//                string name, password;
//                double salary;
//                cout << "Enter admin details:\n";
//                cout << "ID: ";
//                cin >> id;
//                cout << "Name: ";
//                cin.ignore();
//                getline(cin, name);
//                cout << "Password (at least 8 characters, no spaces): ";
//                getline(cin, password);
//                cout << "Salary (should be at least 5000): ";
//                cin >> salary;
//                Admin admin(id, name, password, salary);
//                fileManager.addAdmin(admin);
//                break;
//            }
//            case 4: {
//                cout << "Clients:\n";
//                fileManager.getAllClients(); // Use FileManager function to list clients
//                break;
//            }
//            case 5: {
//                cout << "Employees:\n";
//                fileManager.getAllEmployees(); // Use FileManager function to list employees
//                break;
//            }
//            case 6: {
//                cout << "Admins:\n";
//                fileManager.getAllAdmins(); // Use FileManager function to list admins
//                break;
//            }
//     
//            case 7: {
//                cout << "Exiting...\n";
//                break;
//            }
//            default:
//                cout << "Invalid choice. Please try again.\n";
//            }
//        } while (choice != 7);
//    
//}
//   case 4: {
        //    // List all clients
        //    cout << "Clients:\n";
        //    vector<Client> clients = fileManager.getAllClients();
        //    for (auto& client : clients) {
        //        client.displayInfo();
        //    }
        //    break;
        //}
        //case 5: {
        //    // List all employees
        //    cout << "Employees:\n";
        //    vector<Employee> employees = fileManager.getAllEmployees();
        //    for ( auto& employee : employees) {
        //        employee.displayInfo();
        //    }
        //    break;
        //}
        //case 6: {
        //    // List all admins
        //    cout << "Admins:\n";
        //    vector<Admin> admins = fileManager.getAllAdmins();
        //    for ( auto& admin : admins) {
        //        admin.displayInfo();
        //    }
        //    break;
        //}
       /* case 7:
        {
            ifstream ClientFile("Client.txt");
            if (ClientFile.is_open())
            {
                string line;
                while (getline(ClientFile, line))
                {
                    cout << line << endl;
                }
            }*/
//Client x();
////x.displayInfo();
// 
//cout << "\n===================================\n";

//Employee z();
////z.displayInfo();

//cout << "\n===================================\n";

//Admin v();
////v.displayInfo();

//int main() {
//	cout << " Write The Number : \n";
//	cout << " 1-Client         2-Employee         3-Admin\n";
//	int num;
//	cin >> num;
//
//	if (num == 1) {
//		Client C;
//		cout << "what is your name?";
//		string n;
//		cin >> n;
//		C.setName(n);
//		cout << "what is your ID?";
//		int i;
//		cin >> i;
//		C.setID(i);
//		cout << "what is your Password?";
//		string p;
//		cin >> p;
//		C.setPassword(p);
//		cout << "what is your balance?";
//		double b;
//		cin >> b;
//		C.setBalance(b);
//		C.displayInfo();
//	}
//	else if (num == 2) {
//		Employee E;
//		cout << "what is your name?";
//		string n;
//		cin >> n;
//		E.setName(n);
//		cout << "what is your ID?";
//		int i;
//		cin >> i;
//		E.setID(i);
//		cout << "what is your Password?";
//		string p;
//		cin >> p;
//		E.setPassword(p);
//		cout << "what is your salary?";
//		double s;
//		cin >> s;
//		E.setSalary(s);
//		E.displayInfo();
//	}
//	else if (num == 3) {
//		Admin A;
//		cout << "what is your name?";
//		string n;
//		cin >> n;
//		A.setName(n);
//		cout << "what is your ID?";
//		int i;
//		cin >> i;
//		A.setID(i);
//		cout << "what is your Password?";
//		string p;
//		cin >> p;
//		A.setPassword(p);
//		cout << "what is your salary?";
//		double s;
//		cin >> s;
//		A.setSalary(s);
//		A.displayInfo();
//	}
//}

//
//// Function to display the game board
//void displayBoard(char board[3][3]) {
//    cout << "-------------" << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "| ";
//        for (int j = 0; j < 3; j++) {
//            cout << board[i][j] << " | ";
//        }
//        cout << endl << "-------------" << endl;
//    }
//}
//
//// Function to check if there's a winner
//char checkWinner(char board[3][3]) {
//    // Check rows
//    for (int i = 0; i < 3; i++) {
//        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
//            return board[i][0];
//    }
//    // Check columns
//    for (int i = 0; i < 3; i++) {
//        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
//            return board[0][i];
//    }
//    // Check diagonals
//    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
//        return board[0][0];
//    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
//        return board[0][2];
//    // No winner yet
//    return ' ';
//}
//
//int main() {
//    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
//    int row, col;
//    char currentPlayer = 'X';
//    char winner = ' ';
//
//    while (winner == ' ') {
//        displayBoard(board);
//        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
//        cin >> row >> col;
//
//        // Check if the chosen cell is valid
//        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
//            cout << "Invalid move! Try again." << endl;
//            continue;
//        }
//
//        // Make the move
//        board[row][col] = currentPlayer;
//
//        // Check for a winner
//        winner = checkWinner(board);
//
//        // Switch player
//        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
//    }
//
//    // Game over
//    displayBoard(board);
//    if (winner != ' ')
//        cout << "Player " << winner << " wins!" << endl;
//    else
//        cout << "It's a draw!" << endl;
//
//    return 0;
//}
