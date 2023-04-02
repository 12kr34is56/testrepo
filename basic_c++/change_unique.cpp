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
            if (v[i]!=v[j]) //This logic won't work as evertime the v[i] beccomes not equal to v[j] it will assign value to num. Do dry run for {1,2,1,2,3}, u will understand :)
            {
                num=v[j];
                break;
            }
            
        }
        
    }
    cout<<num<<endl;
    
}
