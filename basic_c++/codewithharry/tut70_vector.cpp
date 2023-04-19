#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // int size;
    // cout<<"Enter the size:"<<endl;
    // cin>>size;
    // vector <int> v;
    // for (int i = 0; i < size; i++)
    // {
    //     int ele;
    //     cout<<"Enter the value"<<i+1<<endl;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // display(v);
    // v.pop_back();
    // vector<int>::iterator iter=v.begin()
    // v.insert(v.begin(),456);
    vector<int> v2(3,12);
    display(v2);
    return 0;
}