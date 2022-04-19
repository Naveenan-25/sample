#include<iostream>
#include<string>
using namespace std;
enum Appliance{
            Fan = 1,

        };
void display1(){
        switch (Choice)
        {
            case Fan:
                cout<<"Fan is selected\n";
                status=1;
                display2(status);
                break;

        }
    }

 void display2(int status) {
            if(status == 1)
            {
              cout<<"Enter the speed level\n";  
              cin>>value;     
              switch (value)
                {   
                    case 0:
                        cout<<"Fan is turned OFF \n";
                        break;
                    case 1:
                        cout<<"Fan is at 25%\n";
                        break;    
                    case 2:
                        cout<<"Fan is at 50%\n";
                        break; 
                    case 3:       
                        cout<<"Fan is at 75%\n";
                        break;
                    case 4: 
                        cout<<"Fan is at Full Speed%\n"; 
                        break;
                    default:
                        cout<<"You have entered wrong level\n";
                        break;
                }
            }
