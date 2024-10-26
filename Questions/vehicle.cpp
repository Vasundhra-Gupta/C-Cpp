//vehicle as base class with bus and car as derived class!
#include <iostream>
using namespace std;
class vehicle {
    int fuel;
    int capacity;
    public:
    void getFuel(){
        cout<<"Fuel:"<<endl;
        cin>>fuel;
    }
    void getCap(){
        cout<<"Capacity"<<endl;
        cin>>capacity;
    }
    void showFuel(){
        cout<<"Fuel= "<<fuel<<endl;
    }
    void showCap(){
        cout<<"Capacity="<<capacity<<endl;
    }
};
class bus: public vehicle{
    public:
    void getInfo(){
        getFuel();
        getCap();
    }
    void showInfo(){
        cout<<"Bus:"<<endl;
        showFuel();
        showCap();
    }
};
class car: public vehicle{
    public:
    void getInfo(){
        getFuel();
        getCap();
    }
    void showInfo(){
        cout<<"Car:"<<endl;
        showFuel();
        showCap();
    }
};
int main(){
    bus b;
    car c;
    b.getInfo();
    b.showInfo();
    c.getInfo();
    c.showInfo();
    return 0;
}
