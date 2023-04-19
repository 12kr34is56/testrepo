#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>v;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cin>>element;
        v.push_back(element);
    }
    //for loop
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout << endl;
    //while loop
    int i=0;
    while (i<v.size())
    {
        cout<<v[i++]<<" ";
        // i++;
    }
    
    
    
}