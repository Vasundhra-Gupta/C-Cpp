//take an integer array and print odd and even number in other classes.
#include <iostream>
using namespace std;
class array{
    public:
    int arr[10];
    void input(){
        cout<<"Enter your array:"<<endl;
        for(int i=0; i<10; i++){
            cin>>arr[i];
        }
    }
};
class even: virtual public array{
    public:
    void checkEven(){
        cout<<"Even array:"<<endl;
        for(int i=0; i<10; i++){
            if(arr[i]%2==0){
                cout<<arr[i]<<endl;
            }
        }
    }
};
class odd:  virtual public array{
    public:
    void checkOdd(){
        cout<<"Odd array:"<<endl;
        for(int i=0; i<10; i++){
            if(arr[i]%2!=0){
                cout<<arr[i]<<endl;
            }
        }
    }
};
class common: public even, public odd{

};
int main(){
    common c;
    c.input();
    c.checkEven();
    c.checkOdd();
    return 0;
}