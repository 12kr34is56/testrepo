#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v={1,0,1,1,0,1,1,0,1,0,1,0};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int left_pointer=0;
    int right_pointer=v.size()-1;
    while (left_pointer<right_pointer)
    {
        if (v[left_pointer]==1 && v[right_pointer]==0)
        {
            v[left_pointer++]=0;
            v[right_pointer--]=1;
        }
        if (v[left_pointer]==0)
        {
            left_pointer++;
        }
        if (v[right_pointer] == 1)        
        {
            right_pointer--;
        }
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    // with count function 
    // int count;
    // for (int i = 0; i < size ; i++)
    // {
    //     if (arr[i]==0)
    //     {
    //         count++;
    //     }
        
        
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     if (i<count)
    //     {
    //         arr[i]=0;
    //     }
    //     else{
    //         arr[i]=1;
    //     }
    // }
    // with the help of two pointers
    

}