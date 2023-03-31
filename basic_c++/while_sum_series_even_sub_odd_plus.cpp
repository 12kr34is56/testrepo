#include<iostream>
using namespace std;

int main(void){
    int num;
    int result;
    cout<<"Enter the number:";
    cin>>num;
    int i=1;
    int sum=0;
    int sum2=0;
    while (i<=num)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }else{
            sum=sum+i; 
        }
        i++;
        
    }
    
    cout<<sum;
}