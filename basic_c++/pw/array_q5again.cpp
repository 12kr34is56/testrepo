#include<iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter the numbers you want to enter:"<<endl;
    cin>>num;
    int arr[num];
    
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the Elements "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < num; i++)
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
    cout<<"The arrays from "<<min<<"and end to "<<max<<endl;
    cout<<"The number which is are missing are:"<<endl;
    for (int i = min; i <=max; i++)
    {
        bool flag=false;
        for (int j = 0; j < num; j++)
        {
            if (arr[j]==i)
            {
                flag= true;
                break;
            }
            
        }
        if (!flag)
        {
            cout<<i<<endl;
        }
        
        
    }
    
    
}