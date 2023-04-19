#include<iostream>
using namespace std;

int main(void){
    int num=5;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i==num/2)
            {
                cout<<"*";
            }else{
                if (j==num/2)
                {
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                
            }
            
        }
        cout<<endl;
        
    }
    
}