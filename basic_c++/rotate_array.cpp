#include<iostream>
using namespace std;

int main(void){
    int size=6;
    int arr[size];
    int ansarr[size];
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value:"<<i+1<<endl;
        cin>>arr[i];
    }
    int number_rotation;
    cout<<"Enter the times u want to rotate the array:"<<endl;
    cin>>number_rotation;
    
    number_rotation=number_rotation%size;
    int j=0;
    
    for (int i = size-number_rotation; i < size; i++)
    {
        ansarr[j++]=arr[i];
    }
    for (int i = 0; i <= number_rotation ; i++)
    {
        ansarr[j++]=arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<< ansarr[i];
    }
}