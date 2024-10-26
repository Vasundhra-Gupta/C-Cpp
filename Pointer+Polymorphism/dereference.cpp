#include <iostream>
using namespace std;
class test{
    int x;
    int y;
    friend int sum(test);
    public:
    void setData(int a,int b){
        x=a;
        y=b;
    }
};
int sum(test t){
    int test ::* px= &test::x;//pointer to member 1
    int test ::* py= &test::y;
    test * po= &t;//pointer to object
    int sum= t.*px + po->*py;
    return sum;
}
int main(){
    test T;
    T.setData(3,5);
    void (test:: *pf)(int,int)= &test::setData;
    (T.*pf)(10,20);
    test* pt= &T;
    (pt->*pf)(20,20);
    return 0;
}