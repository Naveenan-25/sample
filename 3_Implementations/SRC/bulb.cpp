#include<iostream>
#include<string>
using namespace std;
enum Appliance{
            Fan = 1,

        };
  void display1(){
        switch (Choice)
        {
            case Light:
                cout<<"Light is selected\n";
                status=2;
                display2(status);
                break;
        }
    }
                  
 if(status == 2)
            {
              cout<<"Enter the intensity you want light to glow\n";  
              cin>>intensity;     
              switch (intensity)
                {   
                    case 0:
                        cout<<"Light is turned OFF \n";
                        break;
                    case 1:
                        cout<<"Light is at 25%\n";
                        break;    
                    case 2:
                        cout<<"Light is at 50%\n";
                        break;
                    case 3:       
                        cout<<"Light is at 75%\n";
                        break;
                    case 4: 
                        cout<<"Light is at Full Intensity%\n"; 
                        break;
                    default:
                        cout<<"You have entered wrong case\n";
                        break;
                }
            }
