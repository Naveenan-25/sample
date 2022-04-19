#include<iostream>
#include<string>
using namespace std;
enum Appliance{
            Fan = 1,
            Light,
            Fridge,

        };
 
 class smartswitch
 { 
     public:
     int value;
     int x;
     int Choice;
     int status;
     int intensity;
     string Level;

    void display1(){
        switch (Choice)
        {
            case Fan:
                cout<<"Fan is selected\n";
                status=1;
                display2(status);
                break;
            case Light:
                cout<<"Light is selected\n";
                status=2;
                display2(status);
                break;
            case Fridge:
                cout<<"Fridge is selected\n";
                status=3;
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
            if(status == 3)
                {
                 cout<<"Enter the freezing level\n";   
                 cin>>Level;      
                    if(Level == "low")
                    {
                        cout<<"Fridge is at low freezing level \n";
                    }
                    else if(Level == "Moderate")
                    {
                        cout<<"Fridge is at Moderate freezing level \n";
                    }
                    else if(Level == "High")
                    {
                        cout<<"Fridge is at high freezing level \n";
                    }
                    else
                    {
                        cout<<"You have entered wrong case\n";
                    }
                    // case 1:
                    //     cout<<"Fridge is at mooderate freezing level\n";
                    //     break;    
                    // case 2:
                    //     cout<<"Fridge is at high freezing level\n";
                    //     break;
                    // default:
                    //     cout<<"You have entered wrong case\n";
                    //     break;
            }
        }

        
 };   
    int main()
    {    
        smartswitch a;
        // cin>>a.value;
        
    
        cin>>a.Choice;
       
        a.display1();
    }
