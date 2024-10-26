#include <iostream>
using namespace std;
class time1{
    int hrs;
    int min;
    public:
    time1(){}
    time1(int x, int y){
        hrs=x;
        min=y;
    }
    void showData(){
        cout<<hrs<<"hour"<<endl<<min<<"minutes"<<endl;
    }
    int getHour(){
        return hrs;
    }
    int getMin(){
        return min;
    }
    
};
class time2{
    int sec;
    public:
    time2(){
        sec=95;
    }
    time2(time1 T1){
        int total;
        int h= T1.getHour();
        int m=T1.getMin();
        total= h*60*60+m*60+ sec;
        sec=total;
    }
    void show(){
        cout<<sec<<"seconds"<<endl;
    }
};
int main(){
    time1 T1(2,85);
    time2 T2;
    T2=T1;
    T1.showData();
    T2.show();
    
    return 0;
}