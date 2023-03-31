#include<iostream>
using namespace std;

int main(void){
    int arr[]={1,6,2,3,9};
    int temp;
    int rev[10];
    for (int i =0; i <=5; i++)
    {
        rev[i]=arr[5-i];
    }
    for (int i =1; i <=5; i++)
    {
        cout<<rev[i]<<endl;
    }
    
}