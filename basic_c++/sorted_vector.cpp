#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v(6);
    
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the Element :"<<i+1<<endl;
        cin >> v[i];
    }
    cout<<"Checking if it is sorted or not:";
    bool sortedflag=true;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j <v.size(); j++)
        {
            if (v[i]>v[j])
            {
                 sortedflag=false ;
            }
            
        }
        
    }cout<<sortedflag<<endl;
    
    
}