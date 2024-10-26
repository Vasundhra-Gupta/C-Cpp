//Friend function using reference variable!
//in such program no matters reference used or not bcz data is not passed as arguments raher we input it
#include <iostream>
using namespace std;
class second;
class first{
    int num1;
    friend void swap(first&, second&);
    public:
        void input();
};
class second{
    int num2;
    friend void swap(first&, second&);
    public:
        void input();
};
void first :: input(){
    cout<<"Enter no. 1:\n";
    cin>>num1;
}
void second :: input(){
    cout<<"Enter no. 2:\n";
    cin>>num2;
}
void swap(first &n1, second &n2){
    int temp= n1.num1;
    n1.num1= n2.num2;
    n2.num2= temp;
    cout<<"NO. 1 is:\n"<<n1.num1<<endl;
    cout<<"NO. 2 is:\n"<<n2.num2<<endl;
}
int main(){
    first f;
    second s;
    f.input();
    s.input();
    swap(f,s);
    return 0;
}