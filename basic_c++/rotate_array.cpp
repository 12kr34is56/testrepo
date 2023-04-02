#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
    // int size=6;
    // int arr[size];
    // int ansarr[size];
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the value:"<<i+1<<endl;
    //     cin>>arr[i];
    // }
    // int number_rotation;
    // cout<<"Enter the times u want to rotate the array:"<<endl;
    // cin>>number_rotation;
    
    // number_rotation=number_rotation%size;
    // int j=0;
    
    // for (int i = size-number_rotation; i < size; i++)
    // {
    //     ansarr[j++]=arr[i];
    // }
    // for (int i = 0; i <= number_rotation ; i++)
    // {
    //     ansarr[j++]=arr[i];
    // }
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<< ansarr[i];
    // }
    vector<int>v={1,2,3,4,5};
    int rotation=2;
    rotation=rotation%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(), v.end()-rotation);
    reverse(v.begin()+rotation,v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
       
}