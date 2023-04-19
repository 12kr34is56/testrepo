#include<iostream>
using namespace std;

int main(void){
    int arr[6];
    int size=6;
    int max=INT_MIN;
    int second_max=INT_MIN;
    for (int i = 0; i < size ; i++)
    {
        cout<<"Enter the value "<<i+1<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        if (second_max<arr[i] && arr[i]!=max)
        {
            second_max=arr[i];
        }
        
    }
    cout<<"Second Max"<<second_max<<endl;
    
    
}