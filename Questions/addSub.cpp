//having a number class with the derived class of addition and subtraction
#include <iostream>
using namespace std;
class number{
    protected:
    int a,b;
    public:
    void getData(){
        cout<<"Enter the numbers:"<<endl;
        cin>>a>>b;
    }
};
class addition: public number{
    int total;
    public:
    void calc(){
        total= a+b;
    }
    void show(){
        cout<<"Addition: "<<total<<endl;
    }
};   
class subtraction: public number{
    int diff;
    public:
    void find(){
        diff= a-b;
    }
    void show(){
        cout<<"Subtraction: "<<diff;
    }
};
int main(){
    addition a;
    subtraction s;
    a.getData();
    a.calc();
    a.show();
    s.getData();
    s.find();
    s.show();
    return 0;
}