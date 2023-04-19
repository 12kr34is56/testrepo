#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v(5);
    int sum1=0,sum2=0;
    for (size_t i = 0; i <v.size(); i++)
    {
        cout << "Enter the values:"<<i+1<<endl;
        cin>>v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]%2==0)
        {
            sum1=sum1+v[i];
        }else{
            sum2 = sum2 + v[i];
        }
        
    }
    cout<<"Difference between in Sum of Even and Odd are:"<<sum1-sum2<<endl;
    
}