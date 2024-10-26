#include <iostream>
using namespace std;

// class vector{
//     public:
//     int* arr;
//     int size;
//     vector(int m){
//         size=m;
//         arr= new int[size];
//     }
//     int dotProduct(vector& v){
//         int d=0;
//         for(int i=0; i<size; i++){
//             d= d+ this->arr[i] * v.arr[i];
//         }
//         return d;
//     } 
// };
template <class T>
class vector{
    public:
    T* arr;
    int size;
    vector(int m){
        size=m;
        arr= new T[size];
    }
    T dotProduct(vector& v){
        T d=0;
        for(int i=0; i<size; i++){
            d= d+ this->arr[i] * v.arr[i];
        }
        return d;
    }
};
//Template with multiple parameters
template <class T1, class T2> 
class myClass{
    public:
    T1 data1;
    T2 data2;
    void display(){
        cout<<data1<<data2<<endl;
    }
};
//Temlate with default arguements
template <class T1=int, class T2= char>
class A{
    T1 a;
    T2 b;
    public:
    A(T1 x, T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a is equal to "<<a<<endl<<"b is equal to "<<b<<endl;
    }
};
//Function template
template <class T>
void swapp(T& a, T& b){
    T temp=a;
    a=b;
    b=temp;
}
//Syntax for defining a function outside the class.
template <class T>
class vasu{
    T p;
    vasu(T x){
        p=x;
    }
    void displayV();
};
template <class T>
void vasu<T> :: displayV(){
    cout<<"p is "<<p<<endl;
}
//template functions overloading (Exact match will get highest priority)
void func(int q){
    cout<<"func "<<q<<endl;
}
template <class T>
void func(T r){
    cout<<"funcTemp "<<r<<endl;
}

int main(){
    vector <float>v1(3);
    v1.arr[0]= 4.1;
    v1.arr[1]= 6.4;
    v1.arr[2]= 1;
    vector <float>v2(3);
    v2.arr[0]= 1;
    v2.arr[1]= 2;
    v2.arr[2]= 3.2;
    float a= v1.dotProduct(v2);
    cout<<"Dot Product is "<<a<<endl;

    myClass <int,char> c1;
    c1.data1= 4;
    c1.data2= 97;//char type
    c1.display();

    A <>a1(2,'c');
    a1.display();//default arguements
    A <int, float> a2(3, 6.7);
    a2.display();


    //using function templates
    float x=4.2, y=5.5;
    swapp(x,y);
    cout<<"x is "<<x<<endl<<"y is "<<y<<endl;

    func(4);//Exact match will get highest priority
    func(4.5);//template fn is called
    return 0;
}