#include<iostream>
#include<string>
using namespace std;
enum Appliance{
            Fan = 1,

        };
  void display1(){
        switch (Choice)
        {
            case Fridge:
                cout<<"Fridge is selected\n";
                status=3;
                display2(status);
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
