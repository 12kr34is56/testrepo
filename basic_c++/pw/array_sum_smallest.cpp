#include<iostream>
using namespace std;

int main(void){
    int arr1[]={6,2,3,4,5};
    int arr2[]={1,3,2,9,5};
    int sum=0;
    int min1=arr1[0];
    int min2=arr2[0];
    for (int i = 0; i < 5; i++)
    {
        if (min1>arr1[i])
        {
            min1=arr1[i];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        if (min2 > arr2[i])
        {
            min2= arr2[i];
        }
    }
    sum=min1+min2;
    cout<<sum<<endl;
}