//to store an array of integers nd count number of positive and negative integers!
#include <iostream>
using namespace std;
class integers{
    int arr[10];
    int n;
    int p;
    public:
    integers(){
        n=0;
        p=0;
    }
    public:
    void input(){
        for(int i=0; i<10; i++){
            cin>>arr[i];
        }
    }
    void check(int a){
        if(a<0){
            n++;
        }else{
            p++;
        }
    }
    void call(integers &obj){
        for(int i=0; i<10; i++){
            obj.check(obj.arr[i]);//one by one checking no. from array
        }
    }
    void print(){
        cout<<p<<" Positive and";
        cout<<n<<" Negative Integers"<<endl;
    }
};
int main(){
    integers num;
    cout<<"Enter elements of Integer array"<<endl;
    num.input();
    num.call(num);
    num.print();
    return 0;
}