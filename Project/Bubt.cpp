#include<iostream>
#include<fstream>
#include<windows.h>
#include <cstdlib>
using namespace std;

/// Handling the console text color
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

class BUBT
{

public:
    // ANSI escape codes for text colors and styles
    const string RESET = "\033[0m";
    const string BOLD = "\033[1m";
    const string UNDERLINE = "\033[4m";
    const string RED_TEXT = "\033[31m";
    const string GREEN_TEXT = "\033[32m";
    const string YELLOW_TEXT = "\033[33m";
    const string BLUE_TEXT = "\033[34m";
    void defult()
    {

        int value=0;
        cout<<endl<<endl<<" [01] : exit"<<endl;
        cout<<" [02] : Home" <<endl;
        cout<<"press : ";
        cin>>value;
        switch(value)
        {

        case 1:
        {
            system("cls");
            exit();


            break;
        }
        case 2:
        {
            system("cls");
            home();

            break;


        }
        default:
            system("cls");
            SetConsoleTextAttribute(console, 4);
            cout<<"Wrong value enterd pleas try agin"<<endl;
            SetConsoleTextAttribute(console, 11);
            home();

            break;

        }
    }

    void wrong()
    {

        system("cls");
        SetConsoleTextAttribute(console, 4);
        cout<<"You entered an invalid operator. Please try again\n"<<endl;
        SetConsoleTextAttribute(console, 11);
        home();

    }

    void about()
    {
        SetConsoleTextAttribute(console, 7);
        int value=0;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               SELECT AN OPTION:            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|  [01] : History                            |" << endl;
        cout << "\t\t\t\t\t|  [02] : BUBT TRUST                         |" << endl;
        cout << "\t\t\t\t\t|  [03] : Campus                             |" << endl;
        cout << "\t\t\t\t\t|  [04] : policies, Rules and Regulation     |" << endl;
        cout << "\t\t\t\t\t|  [05] : Mission and obj                    |"<< endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\tpress : ";
        cin>>value;
        system("cls");
        switch(value)
        {

        case 1:
        {
            SetConsoleTextAttribute(console, 8);
            string History;
            ifstream file("History.txt");
            cout<<""<<endl<<endl;
            while (getline(file,History))
            {

                cout<<"\t"<<History<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }
        case 2:
        {
            SetConsoleTextAttribute(console, 9);
            string Trust;
            ifstream file("Trust.txt");
            cout<<endl<<endl;
            while (getline(file,Trust))
            {

                cout<<"\t\t\t"<<Trust<<endl;

            }
            file.close();
            defult();

            system("cls");
            break;
        }
        case 3:
        {
            SetConsoleTextAttribute(console, 10);
            string Campus;
            ifstream file("Campus.txt");
            cout<<endl<<endl<<endl<<endl<<endl;
            while (getline(file,Campus))
            {

                cout<<"\t\t"<<Campus<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }
        case 4:
        {
            SetConsoleTextAttribute(console, 11);
            string Policies_Rules_and_Regulation;
            ifstream file("Policies_Rules_and_Regulation.txt");
            cout<<endl<<endl;
            while (getline(file,Policies_Rules_and_Regulation))
            {

                cout<<"\t\t\t"<<Policies_Rules_and_Regulation<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }
        case 5:
        {
            SetConsoleTextAttribute(console, 15);
            string Mission_and_objective;
            ifstream file("Mission_and_objective.txt");
            cout<<endl<<endl;
            while (getline(file,Mission_and_objective))
            {

                cout<<"\t\t\t"<<Mission_and_objective<<endl;

            }
            file.close();
            defult();
            system("cls");
            break;
        }
        case -1:
        {

            exit();
            break;
        }


        default:
        {
            system("cls");
            wrong();

            break;
        }


        }
    }
    void academic()
    {
        SetConsoleTextAttribute(console, 5);
        int value;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               Select an Option:                    |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << "\t\t\t\t\t[01] : Faculty of Engineering & Applied Sciences" << endl;
        cout << "\t\t\t\t\t[02] : Faculty of Business" << endl;
        cout << "\t\t\t\t\t[03] : Faculty of Arts & Humanities" << endl;
        cout << "\t\t\t\t\t[04] : Faculty of Social Sciences" << endl;
        cout << "\t\t\t\t\t[05] : Faculty of Law" << endl;
        cout << "\t\t\t\t\t------------------------------------------------------" << endl;

        cout<<"\t\t\t\t\tpress : ";
        cin>>value;
        system("cls");
        switch(value)
        {

        case 1:
        {
            SetConsoleTextAttribute(console, 2);
            int value=0;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|               Select an Option:                    |" << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
            cout << "\t\t\t\t\t[01] : Computer Science and Engineering" << endl;
            cout << "\t\t\t\t\t[02] : Electrical and Electronic Engineering" << endl;
            cout << "\t\t\t\t\t[03] : Mathematics & Statistics" << endl;
            cout << "\t\t\t\t\t[04] : Textile Engineering" << endl;
            cout << "\t\t\t\t\t[05] : Mathematics & Statistics" << endl;
            cout << "\t\t\t\t\t[06] : Civil Engineering" << endl;
            cout << "\t\t\t\t\t------------------------------------------------------" << endl;

            cout<<"\t\t\t\t\tpress : ";
            cin>>value;
            system("cls");
            switch(value)
            {
            case 1:
            {
                SetConsoleTextAttribute(console, 1);
                string Computer_Science_and_Engineering;
                ifstream file("Computer_Science_and_Engineering.txt");
                cout<<endl<<endl<<endl;
                while (getline(file,Computer_Science_and_Engineering))
                {

                    cout<<"\t\t\t"<<Computer_Science_and_Engineering<<endl;

                }
                file.close();
                defult();
                system("cls");
                break;
            }


            case 2:
            {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                SetConsoleTextAttribute(console, 4);
                cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
                SetConsoleTextAttribute(console, 7);
                defult();

                break;
            }
            case 3:
            {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                SetConsoleTextAttribute(console, 4);
                cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
                SetConsoleTextAttribute(console, 7);
                defult();
                break;
            }
            case 4:
            {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                SetConsoleTextAttribute(console, 4);
                cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
                SetConsoleTextAttribute(console, 7);
                defult();

                break;
            }
            case 5:
            {

                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                SetConsoleTextAttribute(console, 4);
                cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
                SetConsoleTextAttribute(console, 7);
                defult();
                break;
            }
            case 6:
            {

                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                SetConsoleTextAttribute(console, 4);
                cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
                SetConsoleTextAttribute(console, 7);
                defult();
                break;
            }
            case -1:
            {
                exit();
                break;
            }


            default:
            {
                system("cls");
                wrong();

                break;
            }

            }
        }
        case 2:
        {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(console, 4);
            cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
            SetConsoleTextAttribute(console, 7);
            defult();

            break;
        }
        case 3:
        {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(console, 4);
            cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
            SetConsoleTextAttribute(console, 7);
            defult();
            break;
        }
        case 4:
        {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(console, 4);
            cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
            SetConsoleTextAttribute(console, 7);
            defult();

            break;
        }
        case 5:
        {

            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            SetConsoleTextAttribute(console, 4);
            cout<<"\t\t\t\t\tSecurity issue please try again and other options!"<<endl;
            SetConsoleTextAttribute(console, 7);
            defult();
            break;
        }

        default:
        {
            system("cls");
            wrong();

            break;
        }


        }
    }
    void clubs()
    {

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "|                List of BUBT Clubs                  |" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
        cout << " [01] : IT Club" << endl;
        cout << " [02] : IEEE BUBT Student Branch" << endl;
        cout << " [03] : Sports Club" << endl;
        cout << " [04] : EEE Club" << endl;
        cout << " [05] : English Language Club" << endl;
        cout << " [06] : Social Welfare Club" << endl;
        cout << " [07] : BUBT Moot Court Society-BMCS" << endl;
        cout << " [08] : BUBT Photography Club" << endl;
        cout << " [09] : Business Club" << endl;
        cout << " [10] : Cultural Club" << endl;
        cout << " [11] : Debating Club" << endl;
        cout << " [12] : Rover Scout" << endl;
        cout << " [13] : Economics Club" << endl;
        cout << " [14] : Bangladesh National Cadet Corps (BNCC)" << endl;
        cout << "------------------------------------------------------" << endl;


        defult();
        system("cls");

    }
    void contacts()
    {
        SetConsoleTextAttribute(console, 6);
        string Contacts;
        ifstream file("Contacts.txt");
        while (getline(file,Contacts))
        {

            cout<<"\t\t\t\t"<<Contacts<<endl;

        }
        file.close();
        defult();
        system("cls");
    }
    void start()
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl<<endl<<endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\t----------------------------------------------" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\t----------------------------------------------" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\tBangladesh University of Business & Technology" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\t----------------------------------------------" << endl;
        SetConsoleTextAttribute(console, 15);
        cout << "\t\t\t\t\tLoading ";
        SetConsoleTextAttribute(console, 15);
        char x = 219;
        //219
        for (int i = 0; i < 35; i++)
        {
            cout << x;
            if (i < 10)
                Sleep(250);
            if (i >= 10 && i < 20)
                Sleep(100);
            if (i >= 10)
                Sleep(25);
        }
        system("cls");
    }
    void admission()
    {

        SetConsoleTextAttribute(console, 2);
        int value=0;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               CHOOSE AN OPTION:            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t|               [01] : Login                 |" << endl;
        cout << "\t\t\t\t\t|               [02] : Ragistation           |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\tpress : ";
        SetConsoleTextAttribute(console, 7);
        cin>>value;
        switch(value)
        {
        case 1:
        {
            system("cls");
            SetConsoleTextAttribute(console, 11);
            int value=0;
            string ID,password;
            cout << endl << endl << endl << endl << endl << endl << endl << endl;

            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|           SININ IN TO BUBT ANNEX:          |" << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|      Enter your ID :                       |" << endl;
            cout << "\t\t\t\t\t|      Enter your password :                 |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t|                                            |" << endl;
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "\t\t\t\t\t|      Enter your ID :";
            cin>>ID;
            cout << "\t\t\t\t\t|      Enter your password :";
            cin>>password;


        }
        }
    }
    /*****************************************************************************************************************************/
    void home()
    {
        SetConsoleTextAttribute(console, 11);
        int value;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               SELECT AN OPTION:            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [01] : ABOUT                 |" << endl;
        cout << "\t\t\t\t\t|               [02] : ACADEMIC              |" << endl;
        cout << "\t\t\t\t\t|               [03] : CLUBS                 |" << endl;
        cout << "\t\t\t\t\t|               [04] : ADMISSION             |" << endl;
        cout << "\t\t\t\t\t|               [05] : CONTACTS              |" << endl;
        cout << "\t\t\t\t\t|                                            |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\t|               [-1] : Exit                  |" << endl;
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t\t\tpress : ";
        system("color");
        cin>>value;
        system("cls");

        switch(value)
        {

        case 1:
        {
            about();
            break;
        }
        case 2:
        {
            academic();
            break;
        }
        case 3:
        {
            clubs();
            break;
        }
        case 4:
        {
            admission();
            break;
        }
        case 5:
        {
            contacts();
            break;
        }
        case -1:
        {
            exit();
            break;
        }

        default:
        {
            wrong();
            break;

        }

        }

    }
    void exit() {}


};
int main()
{

    BUBT object;
    // object.start();
    object.admission();
    //object.home();


}
