#include<iostream>
using namespace std;
int main(){
    cout<<"Simple Calculator"<<endl;
 char ch;cout<<"press c for calculator or any other key to quit :";
    cin>>ch;
    while (ch=='c')
    {
        int first_number,second_number;
        cout<<"enter first number :"; cin>>first_number;
        cout<<endl;
        cout<<"enter second number :"; cin>>second_number;
        cout<<endl;

        string operation;cout<<"enter operator :";
        cin>>operation;

        if (operation=="+")
        {
            cout<<first_number+second_number<<endl;
        }
        else if (operation=="-")
        {
            cout<<first_number-second_number<<endl;
        }
        else if (operation=="*")
        {
            cout<<first_number*second_number<<endl;
        }
        else if (operation=="/")
        {
            cout<<float(first_number)/float(second_number)<<endl;
        }

        cout<<"press c for calculator again or any other key to quit :";
        
    }
}