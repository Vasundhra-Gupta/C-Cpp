#include <iostream>
using namespace std;
class time{
    int hrs;
    int min;
    public:
    void input(){
        cin>>hrs>>min;
    }
    operator int(){//return type not specified in conversion function
        int t;
        t= hrs*60+min;
        return t;
    }
};

int main(){
    time t;
    t.input();
    int dur;
    dur=t;
    cout<<"Duration in minutes is "<<dur<<endl;

    return 0;
}