//to calculate total, percentage and avg of 3 students
#include <iostream>
using namespace std;
class result{
    int m1, m2, m3;
    int avg, percent, total=0;
    public:
    void getData(){
        cin>>m1>>m2>>m3;
    }
    void calc(){
        total= m1+m2+m3;
        avg= total/3;
        percent= (total*10)/8;
    }
    void display(int i){
        cout<<"Student"<<i+1<<endl;
        cout<<"Total is: "<<total<<endl;
        cout<<"Average is: "<<avg<<endl;
        cout<<"Percentage is: "<<percent<<"%"<<endl;
    }
};
int main(){
    result r[3];
    for(int i=0; i<3; i++){
        cout<<"Enter marks of 3 subjects out of 80 of student"<<(i+1)<<endl;
        r[i].getData();
        r[i].calc();
    }
    for(int i=0; i<3; i++){
        r[i].display(i);
    }
    return 0;
}
