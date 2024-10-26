//Find factorial of a number using constructor
#include <iostream>
using namespace std;
class factorial{
    int n;
    public:
    factorial(int n1){
        n=n1;
    }
    int fact(){
        int f=1;
        for(int i=1; i<=n; i++){
            f=f*i;
        }
        return f;
    }
};
int main(){
    factorial f1(6);
    int f= f1.fact();
    cout<<"Factorial:"<<endl<<f;
    return 0;
}