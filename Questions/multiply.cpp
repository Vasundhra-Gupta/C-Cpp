//To muliply two numbers of diffrent class and store result in 3rd class
#include <iostream>
using namespace std;
// class second;
// class first;
// class third{
//     int m;
//     friend third multiply(first, second);
// };
class first{
    protected:
    int m1;
    public:
    void input(){
        cout<<"Enter Value 1"<<endl;
        cin>>m1;
    }
    // friend third multiply(first, second);
};
class second{
    protected:
    int m2;
    public:
    void getData(){
        cout<<"Enter Value 2"<<endl;
        cin>>m2;
    }
    // friend third multiply(first, second);
};
class third : public first, public second{
    public:
    void display(){
        cout<<m1<<"*"<<m2<<"="<<m1*m2<<endl;
    }
};
// third multiply(first f1, second s2){
//     third t3;
//     t3.m= f1.m1* s2.m2;
//     cout<<"Multiplication: "<<t3.m;
// }
int main(){
    third mul;
    mul.input();
    mul.getData();
    mul.display();
    return 0;
}