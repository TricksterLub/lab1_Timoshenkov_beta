#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
class Pipe
{
public:
    string name;
    int diametr;
    bool status;

    void setPipe(string w_name, int w_diametr, bool w_status)
    {
        name = w_name;
        diametr = w_diametr;
        status = w_status;
    }
    void changeStatus_Pipe()
    {   
        if (status == false) 
        {
            status = 1;
        }
        else {
            cout << "Status_can_not_be_changed\n";
        }
        
    }
    void getPipe()
    {
        
            cout << "Name_Pipe_" << name << "_Diametr_Pipe_" << diametr << "_Status_Pipe_" << status << "\n";
            
    }
};
class CS
{
public:
    string name;
    int collvo;
    int rab;
    char funct;

    void setCS(string w_name, int w_collvo, int w_rab, char w_funct)
    {
        name = w_name;
        collvo = w_collvo;
        rab = w_rab;
        funct = w_funct;
    }
    void getCS()
    {
        cout << "Name_CS_" << name << "_CS_collvo_" << collvo << "_CS_rab_" << rab << "_CS_funct_" << funct<<"\n";
    }
};

int main()
{   
    ofstream out;
    int a = 9;
    string Pipe_name="";
    int diametr_Pipe=0;
    bool status_Pipe=0;
    string CS_name="";
    int CS_collvo=0;
    int CS_rab=0;
    char CS_funct=0;
    CS CSObj;
    Pipe PipeObj;
    while (true && a != 0) {
        system("cls");
        cout << "choose\n";
        cin >> a;

        switch(a) 
        {

        case 1:
            system("cls");
            cout << "Adding Pipe\n" << "Pipe_name "; 
            cin >> Pipe_name; 
            cout << "diametr_Pipe "; 
            cin >> diametr_Pipe; 
            if (cin.fail()) 
            {   
                cin.clear();
                cin.ignore();
                cout << "Error_diametr_Pipe_was_set_12\n";
                diametr_Pipe = 12;
            }
            cout << "status_Pipe "; 
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Error_status_Pipe_was_set_1\n";
                status_Pipe = 1;
            }
            cin >> status_Pipe;
            diametr_Pipe = abs(diametr_Pipe);           
            PipeObj.setPipe(Pipe_name, diametr_Pipe, status_Pipe);
            break;

        case 2:
            system("cls");
            cout << "Adding CS\n";
            cout << "CS_name ";
            cin >> CS_name;
            cout << "CS_collvo ";
            cin >> CS_collvo;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Error_CS_collvo_was_set_12\n";
                CS_collvo = 12;
            }
            cout << "CS_rab ";
            cin >> CS_rab;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Error_CS_rab_was_set_0\n";
                CS_rab = 0;
            }
            cout << "CS_funct "; 
            cin>> CS_funct;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Error_CS_funct_was_set_0\n";
                CS_funct=0;
            }
            CS_collvo = abs(CS_collvo);
            CS_rab = abs(CS_rab);
            if (CS_collvo << CS_rab)
            {   
                cout << "Error_in_collvo_or_rab_solution_equality";
                CS_rab = CS_collvo;
            }
            
            CSObj.setCS(CS_name, CS_collvo, CS_rab, CS_funct);
            break;
        case 3:
            system("cls");
            cout << "All_Info\n";
            PipeObj.getPipe();
            CSObj.getCS();
            cin>>a;
            break;
        case 4:
            system("cls");
            cout << "Changes_Pipe\n";
            cin >> a;
            while (true && a != 13) {
                switch (a)
                {
                case 1:
                    system("cls");
                    PipeObj.changeStatus_Pipe();
                     cin >> a;
                    
                    break;
                case 2:
                    system("cls");
                    cout << "Pipe_name_changes ";
                    cin >> Pipe_name;
                    PipeObj.setPipe(Pipe_name, diametr_Pipe, status_Pipe);
                    cin >> a;
                default:
                    system("cls");
                    if (cin.fail())
                    {
                        cout << "Error_a_was_set_a_0\n";
                        a = 13;
                    }
                    else {
                        cout << "Position_not_included_repeate_plz_or_enter_a_13\n";
                        cin >> a;
                    }
                    break;
                }
            }
            
            break;
        case 5:
            system("cls");
            cout << "Change_CS";
            break;
        case 6:
            out.open("C:\\test.txt");
            out << Pipe_name << " " << diametr_Pipe << " " << status_Pipe;
            out.close();
            break; 
        case 7:

            break;     
        default:
            system("cls");
            if (cin.fail())
            {
                cout << "Error_a_was_set_a_0\n";
                a = 0;
            }
            else {
                cout << "Position_not_included_repeate_plz_or_enter_a_0\n";
                cin >> a;
            }
            
            break;
        }
        if (a == 0)
        {       
            if (cin.fail())
            {
                cout << "Programm_ended_thanks_for_using";
            }
            else {
                system("cls");
                cout << "Programm_ended_thanks_for_using";
            }
        }
        else {
            cout << "Programm_ended_thanks_for_using";
        }
    }

}