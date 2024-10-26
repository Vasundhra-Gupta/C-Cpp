//Represent bank details using a class wityh methods to deposit, withdraw and checking balance!
#include <iostream>
using namespace std;
class bank{
    char name[10];
    int accNo;
    int balance;
    public:
    void input(){
        cout<<"Account Holder name"<<endl;
        cin>>name;
        cout<<"Account No."<<endl;
        cin>>accNo;
        cout<<"Balance"<<endl;
        cin>>balance;
    }
    void depositVal(int d){
        balance= balance+ d;
    }
    void withdrawVal(int);
    void display(){
        cout<<"Account Holder name"<<endl<<name<<endl;
        cout<<"Account No."<<endl<<accNo<<endl;
        cout<<"Initial Balance"<<endl<<balance<<endl;
    }
};
void bank :: withdrawVal(int w){
        balance= balance-w;
}
int main(){
    bank b[3];
    int deposit, withdraw;
    for(int i=0; i<3; i++){
        cout<<"Customer"<<i+1<<endl;
        b[i].input();
        cout<<"Enter amount to deposit"<<endl;
        cin>>deposit;
        b[i].depositVal(deposit);
        cout<<"Enter amount to withdraw"<<endl;
        cin>>withdraw;
        b[i].withdrawVal(withdraw);
    }
    for (int i=0; i<3; i++){
        cout<<"Customer"<<i+1<<endl;
        b[i].display();
    }
    return 0;
}