#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
    vector<int>v={9,8,7,6,5,3,9,1,2};
    vector<int>v2;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]%2==0)
        {
            v2.push_back(v[i]);
            v.erase(v.begin() + i);
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i <v.size() ; i++)
    {
        v2.push_back(v[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }

}