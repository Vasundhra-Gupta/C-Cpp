//******************************Single Inheritance**************************************************
#include <iostream>
using namespace std;

class Base{
    int data1;
    public:
    int data2;
    void setData(){
        data1= 10;
        data2= 20;
    }
    int getData1(){
        return data1;
    }
    int getData2(){
        return data2;
    }
};
class Derived : public Base{
    int data3;
    public:
    void process();
    void display();
};
void Derived :: process(){
    // setData();//In case of private mode
    data3= data2* getData1();
}
void Derived :: display(){
    cout<<"The data 1 is "<<getData1()<<endl;
    cout<<"The data 2 is "<<data2<<endl;
    cout<<"The data 3 is "<<data3<<endl;
}
int main(){
    Derived d;
    d.setData();//In case of private mode we can not access setData function as it would be private member now not public but we can call it inside other function of derived class rather.
    d.process();
    d.display();
    return 0;
}