#include<vector>
#include<iostream>
using namespace std;

int main(void){
    
    vector<int>v(5);
    for (int i = 0; i <5;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the number you want search:";
    int x;
    cin>>x;
    int occurence=-1;
    for (int i = v.size()-1; i>=0 ; i--)
    {
        if (v[i]==x)
        {
            occurence=i;
            break;
        }
        
    }
    cout<<"The last index is:"<<occurence<<endl;
     
}