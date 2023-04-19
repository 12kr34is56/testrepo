#include<iostream>
using namespace std;
int main(void){
    int num;
    cout<<"Enter the size";
    cin>>num;
    for (int i = 0; i <num; i++)
    {
        for (int j = 0; j <num ; j++)
        {
            if (i==j||i+j==num-1)
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}