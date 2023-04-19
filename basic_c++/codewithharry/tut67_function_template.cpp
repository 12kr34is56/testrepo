#include<iostream>
using namespace std;
template <class t1,class t2>
// int func(t1 a,t1 b){
//     int c= a+b;
//     return c;
// }

float func(t1 a,t2 b){
    float avg=(a+b)/2;
    return avg;
}
int main()
{
    // cout<<"Enter the number :"<<endl;
    // int x,y;
    // cin>>x>>y;
    // func();
    // cout<<"The sum of two number is:"<<func(5,6);
    float a;
    // a=func<int ,float >(5,2.4);
    a=func(5,2.4);
    cout<<"The average of numebr is "<<a;
    // printf("The average of number is :%f",a);
    return 0;
}