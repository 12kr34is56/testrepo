#include<iostream>
using namespace std;

int main(void){
    int age;
    cout<<"Enter the age:";
    cin>>age;
    if (age>18)
    {
        cout<<"Adult";
    }else if (age>=12 &&age<=18)
    {
        cout<<"Teenager";
    }else{
        cout<<"Child";
    }
    
    
}