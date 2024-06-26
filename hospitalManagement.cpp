#include <iostream>
#include<vector>
using namespace std;

class hospital{
    public:
    string name,bg;
    int age,contact;
 };
hospital h1;

int main()

{   vector<hospital> vh;
    cout << "  WELCOME  " << endl << endl;
    while(true){
    
    cout << "(1) For Admit new Patient " << endl;
    cout << "(2) For All Patient List " << endl;
    cout << "(3) For Discharge Patient " << endl;
    cout << "(4) For Exit " << endl;
    
    int choice;
    cout << " Enter your Choice :";
    cin >> choice;
    
    switch(choice){
        case 1 : {int value;
            do{
                cout << " Name :" ; cin >> h1.name;
                cout << " Age :" ; cin >> h1.age;
                cout << " Bg :" ; cin >> h1.bg;
                cout << " Contact :" ; cin >> h1.contact;
                vh.push_back(h1);
                
                cout << vh.size() << " Patient admitted " << endl;
                
                
                cout << " Press 1 for continue or 0 for exit :"; cin >> value;
               
                
        }
        while(value==1&&value!=0);
        break;
        } // case 1
        
        case 2:{
            for(int i=0;i<vh.size();i++){
                cout << endl;
                cout << " Name :" << vh[i].name << endl;
                cout << " Age :" <<  vh[i].age << endl;
                cout << " Bg :" << vh[i].bg << endl;
                cout << " Contact :" << vh[i].contact << endl << endl;
            }
            break;
        } // case 2
    
        case 3 :{int v;
            
            int c;
            cout << "Enter contact :" ; cin >> c;
            for(int i =0;i<vh.size();i++){
                if(c == vh[i].contact){
                
                
                cout << " Name :" << vh[i].name << endl;
                cout << " Age :" <<  vh[i].age << endl;
                cout << " Bg :" << vh[i].bg << endl;
                cout << " Contact :" << vh[i].contact << endl << endl;
                vh.erase(vh.begin() + i);
            }
            
            cout << " Patient Discharged." << endl << endl;
            
            }
            break;
            
        }
        case 4 : {
            cout << " Exited " << endl;
            cout << " Thank You " << endl;
            exit(0);
            break;
        }
        default : {
            cout <<" Invalid Input " << endl;
            break;
        }
    
        
    } // switch
    
} //  while
    return 0;

}