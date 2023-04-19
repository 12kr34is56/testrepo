#include<iostream>
using namespace std;

int main()
{
    // int a=4;
    // int * ptr;
    // ptr=&a;
    // cout<<"The pointer address of value is :"<<*ptr<<endl;
    // int *p= new int(40);
    // cout << "The pointer address of value is :" << *p << endl;
    int *arr= new int[3];
    arr[0]=10;
    arr[1]=30;
    arr[2]=20;
    cout << "The value of arr[0] is :" << arr[0] << endl;
    cout << "The value of arr[1] is :" << arr[1] << endl;
    cout << "The value of arr[2] is :" << arr[2] << endl;
    return 0;
}