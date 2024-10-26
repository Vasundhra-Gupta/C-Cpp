//having account base class with salary and a programme derived class with bonus and showing final salary
#include <iostream>
using namespace std;
class account{
    protected:
    int sal;
    public:
    void getSalary(){
        cout<<"Enter salary:"<<endl;
        cin>>sal;
    }
};
class programme : public account{
    int bonus;
    public:
    void getBonus(){
        cout<<"Enter Bonus:"<<endl;
        cin>>bonus;
    }
    void showsalary(){
        cout<<"Total Salary: "<<bonus+sal<<endl;
    }
};
int main(){
    programme p;
    p.getSalary();
    p.getBonus();
    p.showsalary();
    return 0;
}