#include <iostream>
using namespace std;
class second;
class first{
    int num1;
    friend void swap(first&, second&);
    public:
        void input(int);
        void show(){
            cout<<"num 1 is "<<num1<<endl;
        }
};
class second{
    int num2;
    friend void swap(first&, second&);
    public:
        void input(int);
        void show(){
            cout<<"num 2 is "<<num2<<endl;
        }
};
void first :: input(int a){
    num1=a;
    // cout<<"Enter no. 1:\n";
    // cin>>num1;
}
void second :: input(int b){
    num2=b;
    // cout<<"Enter no. 2:\n";
    // cin>>num2;
}
void swap(first &n1, second &n2){
    int temp= n1.num1;
    n1.num1= n2.num2;
    n2.num2= temp;
    // cout<<"NO. 1 is:\n"<<n1.num1<<endl;
    // cout<<"NO. 2 is:\n"<<n2.num2<<endl;
}
int main(){
    first f;
    second s;
    f.input(2);
    s.input(4);
    swap(f,s);
    f.show();
    s.show();
    return 0;
}