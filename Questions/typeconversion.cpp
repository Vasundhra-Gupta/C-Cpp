//Convert basic data type into class type using constructor
#include <iostream>
using namespace std;
class data{
    int x;
    float f;
    public:
    data(){
        x=0;
        f=0;
    }
    data(float m){
        x=2; 
        f=m;
    }
    void show(){
        cout<<"x= "<<x<<endl<<"f= "<<f<<endl;
    }
};
int main(){
    data d1,d2;
    d1= 3.3;// or d1(3.0)
    d1.show();
    d2= d1;
    d2.show();
    return 0;
}