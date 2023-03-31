#include<iostream>
using namespace std;

int main(void){
    int length,breath;
    cout<<"\nEnter the value of length and breath:";
    cin>>length>>breath;
    if (length == breath)
    {
        cout<<"This is an square";
    }else{
        cout<<"This is an rectangle";
    }
    
}