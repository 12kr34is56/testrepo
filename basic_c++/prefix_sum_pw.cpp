#include<iostream>
#include<vector>
using namespace std;
void sum_prefix(vector<int> &v){
    for (int i = 0; i <v.size(); i++)
    {
        v[i]+=v[i-1];
    }
    return;
}
int main(void){
    int n;
    cin>>n;
    vector<int>v={1,2,3,4,5};
    // for (int i = 0; i <n; i++)
    // {
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    for (int i = 0; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
    // sum_prefix(v);
    for (int j = 0; j <n; j++)
    {
        cout<<v[j]<<",";
    }cout<<endl;
    
    
}