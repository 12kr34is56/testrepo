#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v1(4);
    vector<int>v2(4);
    vector<int>v3(8);
    // cout<<"Enter the values for First vector";
    for (int i = 0; i < 4; i++)
    {
        cout<<"Element number"<<i+1<<endl;
        cin>>v1[i];
    }
    // cout << "Enter the values for Second vector";
    for (int i = 0; i < 4; i++)
    {
        cout << "Element number" << i+1 << endl;
        cin >> v2[i];
    }
    for (int i = 0; i < 8; i++)
    {
        v3[i]=v1[i];
    }
    for (int i = 0; i < 8; i++)
    {
        v3[i+4] = v2[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<v3[i];
    }
    
    for (int i = 0; i < v3.size(); i++)
    {
        if (v3[i])
        {
            /* code */
        }
        
    }
    
}
