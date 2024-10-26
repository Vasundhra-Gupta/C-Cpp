//print fibonacci series using constructor under inheritance
#include <iostream>
#include <string>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(){
        a=0;
    }
};
class B{
    protected:
    int b;
    public:
    B(){
        b=1;
    }
};
class C: public A , public B{
    int c;
    public:
    C(): A(), B(){
        c=a+b;
    } 
    void print(){
        cout<<c<<"\t";
        a=b;
        b=c;
        c=a+b;
    }
};
int main(){
    int n;
    C c;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"The series is:"<<endl<<"0\t1\t";
    for(int i=1; i<=n-2; i++){
        c.print();
    }
    return 0;
}