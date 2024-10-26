#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Value of x"<<endl;
    cin>>x;
    try{
        if(x==1){
            throw x;
        }
        else if(x==0){
            throw 'x';
        }
        else if(x==1.0){
            throw x;
        }
    }catch(int i){
        cout<<"Caught an integer"<<endl;
    }catch(char c){
        cout<<"Caught a character"<<endl;
    }catch(double d){
        cout<<"Caught a double"<<endl;
    }catch(...){
        cout<<"Caught an exception"<<endl;
    }
    return 0;
}