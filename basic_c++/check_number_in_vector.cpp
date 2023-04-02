#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    int size;
    cin>>size;
    vector<int>v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    const int N=1e5 +10;
    vector<int>freq(N,0);
    for (int i = 0; i < size; i++)
    {
        freq[v[i]]++;

    }
    int q;
    cout<<"Enter the queries:";
    cin>>q;

    while (q--)
    {
        int query;
        cin>>query;
        cout<<freq[query]<<endl;
    }
    
    
    


}