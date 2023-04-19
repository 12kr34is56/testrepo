#include<math.h>
#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the value:";
    cin>>num;
    if (num>0)
    {
        cout<<"The abolute value is :"<<num<<endl;
    }else{
        // cout << "The abolute value is :" <<-(num) << endl;
        cout << "The abolute value is :" <<abs(num) << endl;
    }
    
}