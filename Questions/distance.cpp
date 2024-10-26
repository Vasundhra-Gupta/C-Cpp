#include <iostream>
#include <math.h>
using namespace std;

class point{
    int x, y;
    public:
    point(int a, int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
    friend void distance(point p1, point p2){//friend function
        cout<<"The distance between the points is = "<<sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));//pow(base, exp);
    }
};

int main(){
    point p(5,3);
    p.display();

    point q(10,3);
    q.display();

    distance(p,q);
    return 0;
}