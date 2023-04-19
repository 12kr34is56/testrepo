// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.
#include<iostream>
using namespace std;

int main(void){
    int choice,a,b;
    cout<<"This is calculator:"<<endl;
    cout<<"\n1 .Addition";
    cout << "\n2 .Subtraction";
    cout << "\n3 .Multiplication";
    cout << "\n4 .Division";
    cout<<"\nEnter the choice:";
    cin>>choice;
    cout<<"\nEnter the value of a and b:";
    cin>>a>>b;
    switch (choice)
    {
    case 1:
    cout<<a+b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;

    default:
    cout<<"Wrong input";
        break;
    }
}