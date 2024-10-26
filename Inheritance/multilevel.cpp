#include <iostream>
using namespace std;

class Student{
    protected:
    int roll;
    public:
    void setRoll(int r){
        roll= r;
    }
    void getRoll(){
        cout<<"Roll no.: "<<roll<<endl;
    }
};

class Exam: public Student{
    protected:
    float maths;
    float phy;
    float chem;
    public:
    void setMarks(float m1, float m2, float m3){
        maths= m1;
        phy= m2;
        chem= m3;
    }
    void getMarks(){
        cout<<"Marks in Maths: "<<maths<<endl;
        cout<<"Marks in Physics: "<<phy<<endl;
        cout<<"Marks in Chemistry: "<<chem<<endl;
    }
};

class Result: public Exam{
    float percent;
    public:
    void display(){
        getRoll();
        getMarks();
        percent= (maths+phy+chem)/3;
        cout<<"Your perentage is "<<percent<<"%"<<endl;
    }
};
int main(){
    Result r1;
    r1.setRoll(39);
    r1.setMarks(90.1,95.4,99.5);
    r1.display();
    return 0;
}