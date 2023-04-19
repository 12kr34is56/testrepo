#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string str = "you know me";
    // ofstream out;
    // out.open("abc.txt");
    // out << str1;
    string str1;
    ifstream in;
    in.open("xyz.txt");
    while (in.eof()==0)
    {
        // in >> str1;
        getline(in,str1);
    cout <<str1<<endl;
    }

    return 0;
}