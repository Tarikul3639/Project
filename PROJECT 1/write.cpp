#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool LoggingIn()
{
    string username, password, un, psw;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    ifstream read("user/" + username + ".txt");

    if (!read)
    {
        // File doesn't exist, so the user doesn't exist.
        return false;
    }

    getline(read, un);
    getline(read, psw);

    if (un == username && psw == password)   // Corrected the variable name here
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout << "Select a choice: \n1. Register \n2. Login \nYour choice: ";
    cin >> choice;

    if (choice == 1)
    {
        string username, password;
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file("user/" + username + ".txt");
        file << "user:" + username << endl << "pass:" + password;
        file.close();

        cout << "Registration successful." << endl;
        system("cls");
        main();


    }
    else if (choice == 2)
    {
        bool status = LoggingIn();
        if (!status)
        {
            cout << "Incorrect Information, Try Again." << endl;
        }
        else
        {
            cout << "Login successful." << endl;
        }
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    system("PAUSE");
    return 0;
}
