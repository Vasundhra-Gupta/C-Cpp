//to input private variables and print them through public function of that class
#include <iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    void assign(int b){
        a=b;
    }
    void show(){
        cout<<a;
    }
};
int main(){
    A obj;
    obj.assign(10);
    obj.show();
    return 0;
}
