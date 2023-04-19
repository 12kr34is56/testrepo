#include<iostream>
using namespace std;

int main(void){
    int arr[]={1,2,9,4,5};
    int max=arr[0];
    int min=arr[0];
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }

    }
    sum=min+max;
    cout<<"Sum of Greatest and Smallest is:"<<sum<<endl;
}