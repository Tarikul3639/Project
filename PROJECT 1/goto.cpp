#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool LoggingIn() {
    string username, password, un, psw;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream read(username + ".txt");

    if (!read) {
        // File doesn't exist, so the user doesn't exist.
        return false;
    }

    getline(read, un);
    getline(read, psw);

    // Extract the actual username and password from the file content
    size_t userPos = un.find("User: ");
    size_t passPos = psw.find("Pass: ");

    if (userPos != string::npos && passPos != string::npos) {
        un = un.substr(userPos + 6); // Extract the username
        psw = psw.substr(passPos + 6); // Extract the password

        if (un == username && psw == password) {
            return true;
        }
    }

    return false;
}

int main() {
    int choice;
    cout << "Select a choice: \n1. Register \n2. Login \nYour choice: ";
    cin >> choice;

    if (choice == 1) {
        string username, password;
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file(username + ".txt");
        file << "User: " << username << endl << "Pass: " << password;
        file.close();

        cout << "Registration successful." << endl;
    }
    else if (choice == 2) {
        bool status = LoggingIn();
        if (!status) {
            cout << "Incorrect Information, Try Again." << endl;
        }
        else {
            cout << "Login successful." << endl;
        }
    }
    else {
        cout << "Invalid choice." << endl;
    }

    // Use system-specific commands to clear the console screen.
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    return 0;
}
