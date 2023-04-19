#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,6,9,7,3,6};
    // sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}