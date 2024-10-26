// Basic error throwing
#include <iostream>
// #include <stdexcept>
// #include <exception>
using namespace std;

void test() throw(int , char){
    throw 20;
}
int main(){
    int a=9,b=0;
    try{
        if(b==0){
            throw "Dividing by 0.\n";
        }
        int c= a/b;
        cout<<c;
    }catch(const char* e){//const is important
        cout<<"Exceptional error occured."<<endl<<e;
    }catch(...){
        cout<<"Catches any type of error"<<endl;
    }

//Throwing error through std exceptional functions in cpp
    try{
        throw runtime_error("Error usng run time error");
    }catch(runtime_error &err){
        cout<<"Exceptional error occured-->"<<endl;
        cout<<err.what();
    }
    cout<<endl;

//Throwing error through function.
    try{
        test();
    }catch(int err){
        cout<<"error using int fn "<<err<<endl;
    }catch(char err){
        cout<<"error using char fn "<<err<<endl;
    }
    
//Nesting try catch
    try{
        try{
            throw "an exception";
        }catch(const char* e){
            cout<<"Char type expection in inner block-->"<<e<<endl;
            throw; //rethrowing exception
        }
    }catch(const char* e){
        cout<<"Unexpected expection in outer block-->"<<endl;
    }catch(...){

    }
    return 0;
}

// We can se multiple catch blocks to catch different try statements.