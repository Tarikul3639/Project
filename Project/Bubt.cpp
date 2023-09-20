#include<iostream>
#include<fstream>
#include <stdlib.h>
using namespace std;
class BUBT
{

public:
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
            cout<<"wrong value enterd pleas try agin"<<endl;
            home();

            break;

        }
    }
    void history()
    {

        string History;
        ifstream file("History.txt");
        while (getline(file,History))
        {

            cout<<endl<<endl<<History<<endl;

        }
        file.close();
        defult();
        system("cls");
    }
    void wrong()
    {

        system("cls");
        cout<<"wrong value enterd pleas try agin"<<endl;
        home();
    }
    void trust()
    {

        string Trust;
        ifstream file("Trust.txt");
        while (getline(file,Trust))
        {

            cout<<endl<<endl<<Trust<<endl;

        }
        file.close();
        defult();
        system("cls");
    }
    void campus()
    {

        string Campus;
        ifstream file("Campus.txt");
        while (getline(file,Campus))
        {

            cout<<endl<<endl<<Campus<<endl;

        }
        file.close();
        defult();
        system("cls");
    }
    void policies_Rules_and_Regulation()
    {
        string Policies_Rules_and_Regulation;
        ifstream file("Policies_Rules_and_Regulation.txt");
        while (getline(file,Policies_Rules_and_Regulation))
        {

            cout<<Policies_Rules_and_Regulation<<endl;

        }
        file.close();
        defult();
        system("cls");

    }
    void mission_and_objective()
    {

        string Mission_and_objective;
        ifstream file("Mission_and_objective.txt");
        while (getline(file,Mission_and_objective))
        {

            cout<<Mission_and_objective<<endl;

        }
        file.close();
        defult();
        system("cls");
    }

    void home()
    {
        int value;
        cout<<"Enter your decision : "<<endl<<endl<<endl;
        cout<<"[01] : About"<<endl;
        cout<<"[02] : Academic"<<endl;
        cout<<"[03] : Resources"<<endl;
        cout<<"[04] : Admission"<<endl;
        cout<<"[05] : contacts"<<endl;
        cout<<"press : ";
        cin>>value;
        system("cls");

        switch(value)
        {

        case 1:
            value=0;
            cout<<"Enter your decision : "<<endl<<endl;
            cout<<" [01] : History"<<endl;
            cout<<" [02] : BUBT TRUST"<<endl;
            cout<<" [03] : Campus"<<endl;
            cout<<" [04] : policies, Rules and Regulation"<<endl;
            cout<<" [05] : Mission and objective"<<endl;
            cout<<"press : ";
            cin>>value;
            system("cls");
            switch(value)
            {

            case 1:
            {
                history();
                break;
            }
            case 2:
            {
                trust();
                break;
            }
            case 3:
            {
                campus();
                break;
            }
            case 4:
            {

                policies_Rules_and_Regulation();
                break;
            }
            case 5:
            {

                mission_and_objective();
                break;
            }
            default:
                wrong();

                break;

            }
            break;


        default:
            wrong();

            break;

        }

    }
    void exit() {}


};
int main()
{

    BUBT object;
    object.home();


}
