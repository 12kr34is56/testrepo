// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.
#include<iostream>
using namespace std;

int main(void){
    int cp,sp,profit;
    cout << "Enter the Cost price of Product:";
    cin >> cp;
    cout << "Enter the Selling price of Product:";
    cin >> sp;
    if (cp>sp)
    {
        cout<<"Loss :"<<cp-sp<<endl;
    }else
        cout << "Profit :" << sp - cp << endl;
}