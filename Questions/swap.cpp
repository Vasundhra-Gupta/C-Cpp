//swap values of two diffrent class using friend function
#include <iostream>
using namespace std;
class second;
class first{
    int val1;
    public:
    void input(){
        cout<<"Enter Value 1"<<endl;
        cin>>val1;
    }
    friend void swap(first, second);
};
class second{
    int val2;
    public:
    void getData(){
        cout<<"Enter Value 2"<<endl;
        cin>>val2;
    }
    friend void swap(first, second);
};
void swap(first x, second y){
    int temp= x.val1;
    x.val1= y.val2;
    y.val2= temp;
    cout<<"Value 1"<<endl<<x.val1<<endl;
    cout<<"Value 2"<<endl<<y.val2<<endl;
}
int main(){
    first f1;
    second f2;
    f1.input();
    f2.getData();
    swap(f1, f2);
    return 0;
}