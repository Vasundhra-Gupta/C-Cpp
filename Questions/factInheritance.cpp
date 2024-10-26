//Find factorial using inheritance
#include <iostream>
using namespace std;
class A{
    int n;
    public:
    A(int p){
        n=p;
    }
    long fact(){
        int f=1;
        for(int i=1; i<=n; i++){
            f=f*i;
        }
        return f;
    }
};
class B: public A{
    public:
    B(int p): A(p){
        cout<<"Object Created"<<endl;
    }
    void print(){
        cout<<"Factorial is "<<fact();
    }
};
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    B f(n);
    f.print();
    return 0;
}