// #include <iostream>
// using namespace std;
#include "vasu.h"//contains namespace vasu1
#include <iostream>
using namespace vasu1;//accesing it in defferent translational units by defining it in  header file.
namespace vasu2{
    char add(char a, char b){
        return a+b;
    }
};
namespace{//can be accessed in same translational unit only.
    void display(){
        std::cout<<"Do nothing"<<std::endl;
    }
}
using namespace vasu1;
using namespace vasu2;

class A{
    int a=40;
    public:
    void put(){
        std::cout<<"a is "<<a<<std::endl;
    }
};
class B{
    int b=90;
    public:
    void print(){
        void put();
        std::cout<<"b is "<<b<<std::endl;
    }
};
int main(){
    B b;
    b.print();
    vasu1::add;
    std::cout<<add(1,2);
    vasu2::add;
    std::cout<<add('a','b');
    display();
    return 0;
}