#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n;
    cin>>n;
    vector<int>v(n-1,0);
    for (int i = 0; i <=n ; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }   
    cout<<"Here start prefix"<<endl;
    int prefix=0;
    for (int i = 1; i <= v.size(); i++)
    {
        v[i]+=v[i-1];
    }
    cout<<"End"<<endl;
    int q;
    cout<<"enter q:";
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<ans<<endl;    
    }
    
    
}