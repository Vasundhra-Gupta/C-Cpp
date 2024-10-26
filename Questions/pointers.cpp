//store the value of a and b using pointers
#include <iostream>
using namespace std;
class value{
    public:
    int a;
    void function(int b){
        cout<<"b is "<<b<<endl;
    }
};
int main(){
    int value:: *ptra= &value:: a;//pointer to a member;
    void (value:: *ptrb)(int)= &value:: function; //pointer to a member function; 
    value V;
    V.*ptra= 10;
    cout<<"a is "<<V.*ptra<<endl;
    (V.*ptrb)(20);
    return 0;
}