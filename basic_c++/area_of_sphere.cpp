#include<iostream>
using namespace std;

int main(void){
    int radius;
    float pi=3.14;
    float result;
    cout<<"Enter the value of radius:";
    cin>>radius;
    result=(4*pi*radius*radius*radius)/3;
    cout<<result;
}