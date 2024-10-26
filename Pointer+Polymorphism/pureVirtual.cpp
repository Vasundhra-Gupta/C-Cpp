#include <iostream>
using namespace std;

class pw{
    public:
    string title;
    float rating;
    pw(string s, float r){
        title= s;
        rating=r;
    }
    virtual void display()=0;//Pure virtual function.(It imposes to have display function in derived class.)
};
class pwVideo: public pw{
    float duration;
    public:
    pwVideo(string s1, float r1, float d1): pw(s1,r1){
        duration=d1;
    }
    void display(){
        cout<<"It consist of amazing video content."<<endl;
        cout<<"The title is "<<title<<endl;
        cout<<"The rating is "<<rating<<endl;
        cout<<"The duration is "<<duration<<endl;
    }
};
class pwText: public pw{
    int words;
    public:
    pwText(string s1, float r1, int w1): pw(s1,r1){
        words=w1;
    }
    void display(){
        cout<<"It consist of amazing textual content."<<endl;
        cout<<"The title is "<<title<<endl;
        cout<<"The rating is "<<rating<<endl;
        cout<<"The no. of words are "<<words<<endl;
    }
};
int main(){
    pwVideo pv("Videos for you", 4.9, 20);
    pwText pt("Notes for you", 4.8, 5000);
    // pv.display();
    // pt.display();
    pw * tut[2];
    //running function using pointer of base class.
    tut[0]= &pv;
    tut[1]= &pt;
    tut[0]->display();//base ptr pointing to fn of one derived class
    tut[1]->display();//base ptr pointing to fn of other derived class

    return 0;
}