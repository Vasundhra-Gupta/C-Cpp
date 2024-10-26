#include <iostream>
using namespace std;

class base1{
    public:
    int varBase;
    void input(int a){
        varBase=a;
    }
    void display(){
        cout<<"Base 1 class variable is "<<varBase<<endl;
    }
};
class der1 : public base1{
    public:
    int varDer;
    void input(int a){
        varDer=a;
    }
    void display(){
        cout<<"Base 1 class variable is "<<varBase<<endl;
        cout<<"Derived 1 class variable is "<<varDer<<endl;
    }
};

class base2{
    public:
    int varBase2= 1;
    virtual void display(){//now if we run then bptr will point to the fn of derived class
        cout<<"Base 2 class variable is "<<varBase2<<endl;
    }
};
class der2 : public base2{
    public:
    int varDer2= 2;
    void display(){
        cout<<"Base 2 class variable is "<<varBase2<<endl;
        cout<<"Derived 2 class variable is "<<varDer2<<endl;
    }
};

int main(){
    base1* ptrB;
    der1 d1;
    ptrB= &d1;
    ptrB->varBase= 12;
    ptrB->display();
    der1* ptrD;
    ptrD->varBase= 123;
    ptrD->varDer= 133;
    ptrD->display();
    //but if we want base class pointer points to derived class pointer then we need to use virtual fn with the base class. After doing that, base class pointer points toward derived class fn.
    base2* ptr;
    der2 d2;
    ptr= &d2;
    ptr->display();

    return 0;
}