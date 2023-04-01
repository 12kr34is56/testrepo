#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v(5);
    for (int i = 0; i <v.size() ; i++)
    {
         cout<<"Enter the value "<<i+1<<endl;
         cin>>v[i];
    }
    int num=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j =i+1; j < v.size(); j++)
        {
            if (v[i]!=v[j])
            {
                num=v[];
                break;
            }
            
        }
        
    }
    cout<<num<<endl;
    
}