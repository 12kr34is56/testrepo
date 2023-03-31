// Q4 - Write a program to print positive number entered by the user, if user enters a negative
//  number, it is skipped.
#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the value:";
    cin>>num;
    if(num>0)
    {
        cout<<"The number "<<num<<" is poistive  and it is print";
    } else{
        cout << "The number is negative and it is skipped";
    }
}