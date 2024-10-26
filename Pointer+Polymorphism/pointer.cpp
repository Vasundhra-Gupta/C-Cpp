#include <iostream>
using namespace std;

class nums{
    int x, y;
    public:
    void setData(int a, int b){
        x=a;
        y=b;
    }
    void getData(){
        cout<<"x is "<<x<<" and y is "<<y<<endl;
    }
};

class shopItem{
    int id;
    float price;
    public:
    void set(int a, float b){
        id=a;
        price=b;
    }
    void get(){
        cout<<"Code of this item is "<<id<<" and Price is "<<price<<endl;
    }
};

class N{
    int w;
    public:
    // void set(int w){
    //     //w=w;  will not give error but will set garbage value. To avoid this we use 'this' pointer.
    //     this->w= w;
    // }
    N& set(int w){
        this->w= w;
        return *this;
    }
    void get(){
        cout<<"w is "<<w<<endl;
    }
};

int main(){
    // int a;
    // int* p= &a;

    //.......................................new keyword/operator.............................................
    int* ptr= new int(40);
    cout<<"The value at ptr is "<<*(ptr)<<endl;

    int* arr= new int[3];
    arr[0]= 1;
    *(arr+1)= 13;
    arr[2]= 10;
    //......................................Delete keyword/operator.............................................
    delete [] arr;
    cout<<"The value at arr is "<<*(arr)<<endl;//by default first one element.
    cout<<"The value at arr is "<<arr[2]<<endl;

    // num* ptr; num n;
    
    // nums n1;
    // nums *pt = &n1;
    //or
    nums *pt = new nums;//this is same as above
    
    (*pt).setData(2,3);
    (*pt).getData();

    pt->setData(4,5);//this is same as above one.(Here, Arrow operator means dereferencing pt and run set data.)
    pt->getData();

    //.........................................Array of Objects...............................................
    shopItem* shopPtr= new shopItem[3];//pointer in cpp me obj ka name ni lete kya???How to use this pointer using dereferencing operator.
    shopItem* temp= shopPtr;//another temprory pointer pointing toward shopPtr.
    //input
    int p;
    float q;
    for(int i=0; i<3; i++){
        cout<<"Enter id and price of the item "<<i+1<<endl;
        cin>>p>>q;
        (*shopPtr).set(p,q);
        shopPtr++;
    }
    for(int i=0; i<3; i++){
        temp->get();
        temp++;
    }
    //.............................................this Pointer.........................................................
    N n;
    // n.set(4);
    // n.get();
    n.set(4).get();
    //bcz, set function returns object so we can use obj.get(); on set.....it is when we used refrence variable(optional) to return object using 'this'.
    return 0;
}