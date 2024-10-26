#include <iostream>
#include <math.h>
// #include <cmath>
using namespace std;

class simple{
    protected:
    float x, y;
    public:
    void input(){
        cout<<"Enter x: "<<endl;
        cin>>x;
        cout<<"Enter y: "<<endl;
        cin>>y;
    }
    void simpleDisplay(){
        cout<<"Addition is "<<x+y<<endl;
        cout<<"Subtraction is "<<x-y<<endl;
        cout<<"Multiplication is "<<x*y<<endl;
        cout<<"Division is "<<x/y<<endl;
    }
};

class scientific{
    protected:
    float x, y;
    public:
    void input(){
        cout<<"Enter x: "<<endl;
        cin>>x;
        cout<<"Enter y: "<<endl;
        cin>>y;
    }
    void scientificDisplay(){
        cout<<"sin("<<y<<") "<<"is "<<sin(y)<<endl;
        cout<<"cos("<<y<<") "<<"is "<<cos(y)<<endl;
        cout<<x<<" raised to the power "<<y<<" is "<<pow(x,y)<<endl;
        cout<<"The ceil of "<<x<<" is "<<ceil(x)<<" and"<<" the ceil of "<<y<<" is "<<ceil(y)<<endl;//Ceil function returns the smallest integral value not less than x.
    }  
};
class hybrid: public simple, public scientific{};
int main(){
    hybrid h;
    cout<<"Simple Calculator"<<endl;
    h.simple::input();//to resolve ambiguity
    h.simpleDisplay();
    cout<<"Scientific Calculator"<<endl;
    h.scientific::input();
    h.scientificDisplay();
    return 0;
}