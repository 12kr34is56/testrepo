#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"Enter the values"<<i+1<<endl;
        cin>>v[i];
    }
    int num;
    int count=0;
    bool flag=false;
    cout<<"Enter the target value:";
    cin>>num;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            for (int k = j+1; k < v.size(); k++)
            {
                if (v[i]+v[j]+v[k]==num)
                {
                    // flag=true;
                    count++;
                }
                
            }
            
        }
        
    }
    // cout<<flag<<endl;
    cout<<count<<endl;
    
    

}