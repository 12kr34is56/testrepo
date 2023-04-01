#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int>v1(4);
    for (int i = 0; i <4; i++)
    {
        cin>>v1[i];
    }
    int num;
    cout<<"Enter the number you want to check the sum:";
    cin>>num;
    bool flag=false;
    for (int i = 0; i < v1.size(); i++)
    {
        if ((v1[i]+v1[i+1])==num)
        {
            flag=true;
        }

    }
    cout<<flag;
    

}