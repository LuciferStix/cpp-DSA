#include<iostream>
#include "calc.hpp"
using namespace std;

int main(){
    Stack<int> s;

    int choice;
    while (1){
        cout<<BLUE<<"Choices : \n"
            <<"1.push \t 2.pop \n"
            <<"3.peek \t 4.isEmpty \n"
            <<"5.isFull\t6.display \n"
            <<"7.exit \n";
        cout<<"Enter your choice : "<<RESET;
        cin>>choice;
        cout<<endl;

        switch(choice){

            case 1: 
                s.push();
                break;

            case 2:
                s.pop();
                break;

            case 3 :
                s.peek();
                break;

            case 4: 
                if(s.isEmpty())
                    cout<<YELLOW<<"Stack is Empty..\n"<<RESET<<endl;
                else    
                    cout<<RED<<"Stack is not Empty..\n"<<RESET<<endl;  
                break;
            
            case 5:
                if(s.isFull())
                    cout<<YELLOW<<"Stack is Full..\n"<<RESET<<endl;
                else    
                    cout<<RED<<"Stack is not Full..\n"<<RESET<<endl;  
                break;

            case 6:
                s.display();
                break;    

            case 7 :
                return 0;

            default: 
                cout<<RED<<"Enter from the given choices!!!\n"<<endl;;
                break;
        }
    }
    return 0;
    }
