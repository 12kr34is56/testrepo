#include<iostream>
#include<map>
#include<string>
using namespace std;
// template <class t1,class t2> 
int main()
{
    map<string,int> markMap;
    markMap["krishna"]=100;
    markMap["KV"]=99;
    markMap["Theeternal"]=98;
    map<string ,int> :: iterator iter;
    for (iter = markMap.begin(); iter!=markMap.end(); iter++)
    {
        cout << (*iter).first << " "<<(*iter).second << " "<<endl;
    }       
    

    return 0;
}