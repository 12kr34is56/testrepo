#include<iostream>
using namespace std;

int main(void){
    int arr[20];
    cout<<"Enter the number:";
    int count;
    cin>>count;
    cout<<"Enter the Elements:";
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elements you want to search:";
    int SearchNum;
    cin>>SearchNum;
    int ans=-1;
    for (int i = 0; i < count; i++)
    {
        if (arr[i]==SearchNum)
        {
            ans=i;
            // cout<<ans<<endl;
            break;
        }

    }cout<<ans<<endl;
    
}