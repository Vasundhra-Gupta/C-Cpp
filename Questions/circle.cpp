//class representing circle
#include <iostream>
using namespace std;
class circle{
    int r;
    public:
    circle(int x){
        r=x;
    }
    int area(){
        return 3.14*r*r;
    }
    int circum(){
        return 3.14*2*r;
    }
};
int main(){
    circle c(4);
    int A= c.area();
    int C= c.circum();
    cout<<"Area: "<<A<<endl<<"Circumference: "<<C;
    return 0;
}