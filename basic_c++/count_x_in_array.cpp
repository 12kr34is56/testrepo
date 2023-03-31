#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v(6);
    for (int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }
    int count=0;
    int num;
    cout<<"Enter the number you want to count:";
    cin>>num;
    for (int i = 0; i < v.size(); i++)
    {
        if (num==v[i])
        {
            count++;
        }
                
    }
    cout<<"The number of times "<<num<<"appears are:"<<count<<endl;
    
    
}