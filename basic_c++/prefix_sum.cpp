#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
    vector<int>v={1,5,3,6,9};
    int prefix=v[0];
    int i=0;
    int sum=0;
    while (i<v.size())
    {
        if (i==0)
        {
        cout<<v[i];
        }
        i++;
        int k=v.begin()+i
        while (v.begin()<k)
        {
            sum=sum+i;
            v.begin()++;
        }
        cout<<sum;   
    }
    
}