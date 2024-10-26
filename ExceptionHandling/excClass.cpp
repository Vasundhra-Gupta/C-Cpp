//Throwing error using user defined exception class
#include <iostream>
#include <exception>
using namespace std;
//user defined class to handle exception
class Overspeed: public exception{
    int speed;
    public:
    const char* what(){
        return "Check your speed \nYou are flying a car not an aeroplane\n";
    }
    void getSpeed(int s){
        speed= s;
    }
    void outSpeed(){
        cout<<"Your speed is "<<speed<<endl;
    }
};

//just to create a fn
class Car{
    int sp;
    public:
    Car(){
        sp=0;
        cout<<"speed is "<<sp<<endl;
    }
    void accelerate(){
        for(;;){
            sp += 10;
            cout<<"speed is "<<sp<<endl;
            if(sp>=250){
                Overspeed s;
                s.getSpeed(sp);
                throw s;
            }
        }
    }
};
int main(){
    Car c;
    try{
        c.accelerate();
    }catch(Overspeed s){
        cout<<s.what();
        s.outSpeed();
    }
    

    
    return 0;
}