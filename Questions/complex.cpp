//without friend function
#include <iostream>
using namespace std;
class parent{
    public:
    virtual void print(){//function overriding
        cout<<"Parent class"<<endl;
    }
    void show(){
        cout<<"Parent class"<<endl;
    }
};
class child : public parent{
    public:
    void print(){
        cout<<"Child class"<<endl;
    }
    void show(){
        cout<<"Child class"<<endl;
    }
};
class complex{
    public:
    int real;
    int img;
    complex(int x, int y){
        real= x;
        img= y;
    }
    complex operator+ (complex c){//operator overloading
        complex ans(0,0);
        ans.real= real + c.real;
        ans.img= img + c.img;
        return ans;
    }
};

int main(){
    complex c1(1,2);
    complex c2(3,4);
    complex c3 = c1+c2;
    parent *p;
    child c;
    p= &c;
    p->print();//child class( due to fn overriding)
    p->show();//parent class
    // c3= c1 + c2;
    cout<<c3.real<<" + "<<c3.img<<"i"<<endl;
    
    return 0;
}
//fn overriding-> if same fn is there in sub and super class, then fn of child class will be preffered