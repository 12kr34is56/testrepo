#include<vector>
#include<iostream>
using namespace std;

int main(void){
    vector<int>v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    int num;
    cout<<"Enter the value:";
    cin>>num;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>num)
        {
            cout<<i<<endl;
        }
        
    }
    
}