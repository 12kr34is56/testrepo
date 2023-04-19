#include<iostream>
using namespace std;

int main(void){
    int arr[]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 9; i++)
    {
        if (i%2==0)
        {
            cout<<"Even:"<<i<<endl;
        }else{
            cout << "Odd:"<<i << endl;
        }
        
    }
    
}