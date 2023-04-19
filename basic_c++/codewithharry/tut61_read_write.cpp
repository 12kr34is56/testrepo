#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("abc.txt");
    string str;
    cout<<"Enter the string";
    cin>>str;
    out<<str;
    out.close();
    return 0;
}