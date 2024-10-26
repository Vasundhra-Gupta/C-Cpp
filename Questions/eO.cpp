
#include <iostream>
using namespace std;
class even;
class odd;
class array{
    int arr[10];
    public:
    void input(){
        cout<<"Enter your array:"<<endl;
        for(int i=0; i<10; i++){
            cin>>arr[i];
        }
    }
    friend void checkEvenOdd(array, even&, odd&);
};
class even{
    int ce=0;
    int arr1[10];
    public:
    void evenF(){
        for(int i=1; i<=ce; i++){
                cout<<arr1[i]<<endl;
        }
    }
    friend void checkEvenOdd(array, even&, odd&);
};
class odd{
    int co=0;
    int arr2[10];
    public:
    void oddF(){
        for(int i=1; i<=co; i++){
                cout<<arr2[i]<<endl;
        }
    }
    friend void checkEvenOdd(array, even&, odd&);

};  
void checkEvenOdd(array a, even &e, odd &o){
    for(int i=0; i<10; i++){
        if(a.arr[i]%2==0){
            e.ce++;
            e.arr1[e.ce]=a.arr[i];
        }
        if(a.arr[i]%2!=0){
            o.co++;
            o.arr2[o.co]=a.arr[i];
        }
    }
}

int main(){
    array a;
    even e;
    odd o;
    a.input();
    checkEvenOdd(a, e, o);
    cout<<"Even array"<<endl;
    e.evenF();
    cout<<"Odd array"<<endl;
    o.oddF();
}