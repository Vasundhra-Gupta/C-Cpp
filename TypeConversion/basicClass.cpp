#include <iostream>
using namespace std;
class time{
    int hrs;
    int min;
    public:
    time(){}
    time(int t){
        hrs=t/60;
        min=t%60;
    }
    void show(){
        cout<<hrs<<" hr "<<min<<" min";
    }
};
int main(){
    time T1;
    int t=85;
    T1=t;
    T1.show();
    return 0;
}