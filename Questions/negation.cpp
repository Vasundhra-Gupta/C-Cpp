//overload negation operator using operator overloading
#include <iostream>
using namespace std;
class negation{
    int a;
    public:
    negation(){
        a=0;
    }
    int operator~ (){
        if(a!=0){
            return 0;
        }  
        else{
            return 1;
        }
    }
};
int main(){
    negation n;
    int x;
    x=~n;
    cout<<x;
    return 0;
}

