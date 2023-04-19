#include<iostream>
using namespace std;

int main(void){
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the number "<<i+1<<endl;
        cin>>arr[i];
    }
    int max=arr[0];
    for (int i = 0; i <6; i++)
    {
        if (max<arr[i-1])
        {
            max=arr[i];
        }
        
    }
    cout<<"Max:"<<max<<endl;
    
}