#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> v(5) ;
    cout<<"Enter the value"<<endl;
    for (int i = 0; i <5; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i <v.size(); i++)
    {
        v[i]=v[i]*v[i];
    }
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while (left_ptr<right_ptr)
    {
        if (v[left_ptr]>v[right_ptr])
        {
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr]>v[right_ptr])
        {
            right_ptr--;
            left_ptr++;
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
}