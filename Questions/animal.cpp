//with animal base class and dog derived class
#include <iostream>
using namespace std;
class animal{
    int feed;
    int sleep;
    public:
    void setFeed(){
        cout<<"Feed:"<<endl;
        cin>>feed;
    }
    void setSleep(){
        cout<<"Sleep:"<<endl;
        cin>>sleep;
    }
    protected:
    int getCondition(){
        if(feed==1&&sleep==1){
            return 1;
        }else{
            return 0;
        }
    }
};
class dog : public animal{
    public:
    void back(){
        cout<<"Back"<<endl;
    }
    void checkCondition(){
        if (getCondition()==0){
            cout<<"Bad Condition"<<endl;
            back();
        }else{
            cout<<"Good Condition"<<endl;
        }
    }
};
int main(){
    dog d;
    d.setFeed();
    d.setSleep();
    d.checkCondition();
    d.setFeed();
    d.setSleep();
    d.checkCondition();
    return 0;
}
