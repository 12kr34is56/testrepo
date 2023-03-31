#include<iostream>
using namespace std;
int main(void){
    int num;
    cout << "Enter the number:";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <=5; i++)
    {
        sum=sum+i;
    }
    // printf("%d",sum);
    cout<<sum;
    
}