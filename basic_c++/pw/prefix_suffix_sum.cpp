#include<iostream>
#include<vector>
using namespace std;
bool pre_suff_summ(vector<int> &v){
    int total_sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        total_sum+=v[i];

    }
    int prefixsum=0;
    for (int i = 0; i < v.size(); i++)
    {
        prefixsum+=v[i];
        int suffix=total_sum-prefixsum;
        if (suffix==prefixsum)
        {
            return true;
        }
        
    }
    return false;
    
}
int main(void){
    int num;
    cin>>num;
    vector<int>v;
    for (int i = 0; i <num; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);                                                                                           

    }
    cout<<pre_suff_summ(v);
}