//base class with a constructor being called in derived class!
#include <iostream>
using namespace std;
class factBase{
    int f;
    public:
    factBase(int a){
        f=1;
        for(int i=1; i<a; i++){
            f=f*i;
        }
    }
    void print(){
        cout<<"Factorial is "<<f;
    }
};
class factDerived : public factBase{
    public:
    factDerived(int p) : factBase(p){}
};
int main(){
    factDerived fd(6);
    fd.print();
    return 0;
}