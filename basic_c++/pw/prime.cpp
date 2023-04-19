#include<iostream>
using namespace std;
int main(void){
    int num;
    cout<<"Enter the num";
    cin>>num;
    for (int i = 2; i <=num; i++)
    {
        if ( i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
    
}