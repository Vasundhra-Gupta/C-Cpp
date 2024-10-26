#include <iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void setRoll(int r){
        roll=r;
    }
    void printRoll(){
        cout<<"Your roll no. is "<<roll<<endl;
    }
};
class test: virtual public student{
    protected:
    float math;
    float phy;
    public:
    void setMarks(float m1, float m2){
        math=m1;
        phy=m2;
    }
    void printMarks(){
        cout<<"Maths: "<<math<<endl
            <<"Physics: "<<phy<<endl;
    }
};

class sport: public virtual student{
    protected:
    float score;
    public:
    void setScore(float s){
        score= s;
    }
    void printScore(){
        cout<<"Score: "<<score<<endl;
    }
};

class result: public test, public sport{
    float total;
    public:
    void sum(){
        total= math+ phy+ score;
    }
    void display(){
        printRoll();
        printMarks();
        printScore();
        cout<<"Your total score is: "<<total;
    }
};

int main(){
    result r;
    r.setRoll(45);
    r.setMarks(99, 98);
    r.setScore(99.9);
    r.display(); 
    r.sum();  
    return 0;
}