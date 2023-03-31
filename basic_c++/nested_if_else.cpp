#include<iostream>
using namespace std;

int main(void){
    int marks;
    cout<<"Enter the marks for Grades:";
    cin>>marks;
    if (marks>33)
    {
        if (marks>=33 && marks<=80 )
        {
            cout<<"Pass";
        }else{
            cout<<"Gracefully Pass";
        }
        
    }else{
        cout<<"Fail";
    }
    
}