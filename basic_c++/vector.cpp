#include<vector>
#include<iostream>
using namespace std;

int main(void){
    vector <int> v;
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);
    v.insert(v.begin()+2,6);
    cout<<v.capacity();
   
}