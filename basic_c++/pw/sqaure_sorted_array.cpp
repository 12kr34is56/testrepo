#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    vector<int>v={-9,-4,1,2,4,3,5};
    // for (int i = 0; i <v.size(); i++)
    // {
    //     v[i]=v[i]*v[i];
    // }
    int temp;
    for (int i = 0; i < 8; i++)
    {
        if (v[i]>v[i+1])
        {
            temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
        // cout<<v[i]<<" ";
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}