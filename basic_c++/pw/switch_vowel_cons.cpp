#include<iostream>
using namespace std;

int main(void){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    switch(ch)
    {
        case 'a ':
        cout<<"vowel";
        break;
        case 'e':
        cout<<"vowel";
        break;
        case 'i':
        cout<<"vowel";
        break;
        case 'o':
        cout<<"vowel";
        break;
        case 'u':
        cout<<"vowel";
        break;
        default:
        cout<<"Consonant";
        break;
    }
}