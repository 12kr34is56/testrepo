#include<iostream>
using namespace std;

int main(void){
    int arr[]={1,0,1,1,0,1,1,0,1,0,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
        
        
    }
    for (int i = 0; i < size; i++)
    {
        if (i<count)
        {
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}