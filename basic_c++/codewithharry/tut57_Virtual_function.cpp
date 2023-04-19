#include <iostream>
using namespace std;
class CWH
{
protected:
    float rating;
    string title;

public:
    // CWH(){}
    CWH(string s, float r) : rating(r), title(s) {}
    virtual void display(){}
};
class CWHvideo : public CWH
{
    float lengthvideo;

public:
        // CWHvideo(){}
    CWHvideo(string s, float r, float vlen) : CWH(s, r)
    {
        lengthvideo=vlen;
    }
    void display(void){
        cout<<"The video title is:"<<title<<endl;
        cout<<"The video rating is:"<<rating<<" out of 5 stars"<<endl;
        cout<<"The video length is:"<<lengthvideo<<endl;
    }
};
class CWHtext : public CWH
{
    int text;

public:
    CWHtext(string s, float r, int word) : CWH(s, r)
    {
        text=word;
    }
    void display(void){
        cout<<"The video title is:"<<title<<endl;
        cout<<"The video rating is:"<<rating<<" out of 5 stars"<<endl;
        cout<<"The words in the text is:"<<text<<endl;
    }
};
int main()
{
    string title;
    float r,length;
    int text;
    title="Welcome to my channel";
    r=3.45;
    length=50.5;
    text=50;
    CWHvideo video(title,r,length);
    CWHtext textc(title,r,text);
    // video.display();
    textc.display();
    // CWHvideo * ptr=new CWHvideo;
    // ptr=&video;
    CWH * ptr[2];
    ptr[0]=&video;
    ptr[1]=&textc;
    // ptr->display();
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}