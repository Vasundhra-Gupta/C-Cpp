#include <iostream>
using namespace std;
class staff{
    int code;
    char name[10];
    public:
    void input(){
        cout<<"Name:\n", cin>>name;
        cout<<"Code:\n", cin>>code;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Code:"<<code<<endl;
    }
};
class teacher : public staff{
    char subject[10];
    char publication[10];
    public:
    void getData1(){
        staff :: input();
        cout<<"Subject:\n", cin>>subject;
        cout<<"Publication:\n", cin>>publication;
    }
    void putData1(){
        staff show();
        cout<<"Subject:"<<subject;
        cout<<"Publication:"<<publication<<endl;
    }
};
class officer : public staff{
    char grade;
    public:
    void getData2(){
        cout<<"Grade:\n", cin>>grade;
    }
    void putData2(){
        cout<<"Grade:"<<grade<<endl;
    }
};
class typist : public staff{
    int speed;
    public:
    void input(){
        cout<<"Speed:\n", cin>>speed;
    }
    void show(){
        cout<<"Speed:"<<speed<<endl;
    }
};
class casual : public typist{
    int dailyWages;
    public:
    void getData3(){
        typist :: input();
        cout<<"Daily Wages:\n", cin>>dailyWages;
    }
    void putData3(){
        typist :: show();
        cout<<"Daily Wages:"<<dailyWages<<endl;
    }
};
class regular : public typist{
    int rating;
    public:
    void getData4(){
        cout<<"Ratings(1-5):\n", cin>>rating;
    }
    void putData4(){
        cout<<"Ratings:"<<rating<<endl;
    }
};
int main(){
    teacher T1;
    officer O1;
    casual C1;
    regular R1;
    T1.getData1();
    O1.getData2();
    C1.getData3();
    R1.getData4();
    T1.putData1();
    O1.putData2();
    C1.putData3();
    R1.putData4();
}
