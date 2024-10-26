#include <iostream>
#include <iomanip>
// #include <string.h>
//encapsulation ensures binding of methods and variables together in a single unit called class since data is only accesible from class methods!

using namespace std;

class Fruits{
    public:
    string name;
    string color;
};

class F{
    int a;
    public:
    F(int x){
        a=x;
    }
    friend void print(F obj);
};
void print(F obj){
    cout<<obj.a;
}

class binary{
    string s;
    public:
    void read(){
        cout<<"Enter a string to be checked:"<<endl;
        cin>>s;
    }
    void checkBin();
    void onesCompl();
    void display(){
            cout<<"Displaying the number"<<endl;
            cout<<s<<endl;
    }
};
void binary :: checkBin(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='1'&&s.at(i)!='0'){
            cout<<"Incorrect binary format";
            exit(0);
        }
    }
}
void binary :: onesCompl(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }else{
            s.at(i)='1';
        }
    }
}


class Shop{
    int itemId[20];
    int itemPrice[20];
    int i;
    public:
    void initialise(){
        i=0;
    }
    void setPrice();
    void displayPrice();
};
void Shop :: setPrice(){
    cout<<"Enter Id of your item no. "<<i+1<<endl;
    cin>>itemId[i];
    cout<<"Enter price of your item no. "<<i+1<<endl;
    cin>>itemPrice[i];
    i++;
}
void Shop :: displayPrice(){
    for(int j=0; j<i; j++){
        cout<<"The price of item no. "<<j+1<<" of item Id "<<itemId[j]<<" is "<<itemPrice[j]<<endl;
    }
}


class Employee{
    int id;
    static int count;//No need to initialise with 0, Default 0 set
    public:
    void setData();
    void display();
    static void getCount(){
        //cout<<id; throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
void Employee :: setData(){
    cout<<"Enter id "<<count+1<<":"<<endl;
    cin>>id;
    count++;
}
void Employee :: display(){
    cout<<"The employee "<<count<<" has id "<<id<<endl;
}
int Employee :: count;//can be self initialised here only.


class complex{
    int a;
    int b;
    public:
    complex(){//Default Constructor
        a=0;
        b=0;
    };
    complex(int x, int y){//Parameterised Contructor
        a=x;
        b=y;
    }
    void setData(int v1, int v2){
        a=v1;
        b=v2;
    }
    void sum(complex c1, complex c2){
        complex c;
        a= c1.a + c2.a;
        b= c1.b + c2.b;
        c.setData((c1.a+c2.a),(c1.b+c2.b));//another way 
    }
    void print(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

class number{
    int data;
    //If any other constructor is made then it is necessary to make copy constructor too, if simple objects are created.
    public:
    number(){};
    number( number& obj){//copy constructor
        cout<<"Copy constructor invoked"<<endl;
        data= obj.data;
    }
    number(int a){
        data=a;
    }
    void display(){
        cout<<"The data is "<<data<<endl;
    }
};


int counter;//making it as global variable.
class num{
    // int counter;
    public:
    num(){
        counter++;
        cout<<"Constructor is invoked for object "<<counter<<endl;
    }
    ~num(){
        cout<<"Destructor destroyed object "<<counter<<endl;
        counter--;
    }
};

class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"base1 class constructor"<<endl;
    }
    void show1(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
        cout<<"base2 class constructor"<<endl;
    }
    void show2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
class derived: public base1, public base2{//base1 class cons called first.
    int d1, d2;
    public:
    derived(int a, int b, int c, int d): base1(a), base2(b){//this order doesn't matter.
        d1=c;
        d2=d;
        cout<<"Derived class constructor"<<endl;
    }
    void show(){
        show1();
        show2();
        cout<<"The value of derived1 is "<<d1<<endl;
        cout<<"The value of derived2 is "<<d2<<endl;
    }
};



int main(){
    //******************************************classes,objects*****************************************************
    Fruits apple;
    apple.name= "Apple";
    apple.color= "Red";
    cout<<apple.name<<"--"<<apple.color<<endl;
    Fruits *mango= new Fruits();//will give a pointer pointing to mango
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<"--"<<mango->color;
    //*******************************************friend*****************************************************
    F object(91);
    print(91);
    //*******************************************setw(num)*****************************************************
    int a= 1;
    int b= 12;
    int c= 1234;
    cout<<"a is "<<setw(4)<<a<<endl;
    cout<<"b is "<<setw(4)<<b<<endl;
    cout<<"b is "<<b<<endl;
    cout<<"b is "<<setw(4)<<c<<endl;
    //******************************************typeconversion*************************************************
    //int to char
    int i= 98;
    char ch = char(i);
    cout<<ch<<endl;
    //char to int
    char ch1= 'a';
    int x= char('a');
    cout<<x<<endl;
    //*****************************************Check binary or not*********************************************
    binary bin;
    bin.read();
    bin.checkBin();
    bin.display();
    bin.onesCompl();
    bin.display();
    //******************************************Array in classes************************************************
    Shop sh;
    sh.setPrice();
    sh.setPrice();
    sh.setPrice();
    sh.displayPrice();
    //******************************************Static Data members*********************************************
    //(to share same variable with diffrent objects of a class we use that variable as static.)
    Employee e1, e2, e3;
    /*
        Enter id 1:
        The employee 1 has id 234
        Enter id 1:
        123
        The employee 1 has id 123
        Enter id 1:
        345
        The employee 1 has id 345
    */
   //If we don't use static then individually count will be increased from 0 to 1 for every object, so we need make count variable of the class so that it can be reserved and retained.
    e1.setData();
    e1.display();
    Employee :: getCount();

    e2.setData();
    e2.display();
    Employee :: getCount();//accessing static function

    e3.setData();
    e3.display();
    Employee :: getCount();
    //***************************************Passing Object as Function****************************************
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.print();

    c2.setData(3,4);
    c2.print();
    
    c3.sum(c1,c2);
    c3.print();
    //********************************************Friend Function***********************************************
    // friend void sum(className c1){
        //if data is input then no matter call by value and call by reference but it matters when data is passed. Values will not be swapped if & is not used, bcz in this case only formal parameters are changed.
    // }
    //*********************************************Constructors*************************************************
    //Implicit call
    complex d(2,3);
    d.print();
    //Explicit call
    complex e= complex(4,5);
    e.print();
    //copy constructors
    number m, n, o(23);
    // x.display(); can't access as it is a private member.
    o.display();
    n = o;//copy constructor not invoked
    n.display();
    number z1(o);//invoked
    z1.display();
    number z2= z1;//invoked
    z2.display();
    //**********************************************Destructors**************************************************
    cout<<"Inside main function"<<endl;
    cout<<"Creating an object"<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main function"<<endl;

    //****************************************Constructor in derived class**************************************
    derived der(1,2,3,4);
    der.show();
    
    //**************************************Initialisation list in Constructor**************************************

    /*
        class initialisingList{
        int u,v;
        public:
        initialisingList(int i, int j): u(i),v(j){ .................................//will run
            cout<<"constructor was invoked";
        }

        initialisingList(int i, int j): u(i),v(i+j){ ...............................//will run
            cout<<"constructor was invoked";
        }

        initialisingList(int i, int j): u(i),v(u+j){ ..............................//will run because u is available for v
            cout<<"constructor was invoked";
        }

        initialisingList(int i, int j): v(j), u(i+v){ ................................//will not run because u is declared first so it will get initialise first not v, so v is not available for u but if we reverse the order of declaration then it will get run...but then above one will not run.
            cout<<"constructor was invoked";
        }

    };
    */
    return 0;
}



    


