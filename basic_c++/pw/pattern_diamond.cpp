#include<iostream>
using namespace std;

int main(void){
    int num=5;
    // char ch='A';
    int ch=65;
    int n=0;
    for (int i = 1; i <=num; i++)
    {
        for (int k = 1; k <= num-i; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << char(ch+n++);
        }
        n=0;
        cout<<endl;
    }
    for (int i = num - 1; i >= 1; i--)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << char(ch+n++);
        }
        n=0;
        cout << endl;
    }
}