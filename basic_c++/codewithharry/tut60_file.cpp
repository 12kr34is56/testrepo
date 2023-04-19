#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str1="Hello everyone";
    ofstream out("xyz.txt");
    out<<str1;
    string str;
    ifstream in("abc.txt");
    // in>>str;
    getline(in,str);
    cout<<str;
    return 0;
}