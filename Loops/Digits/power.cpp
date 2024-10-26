#include <iostream>
using namespace std;
int main(){
    //find a raised to the power b
    int a,b;
    cout<<"Enter base:\n";
    cin>>a;
    cout<<"Enter Exponent:"<<endl;
    cin>>b;
    int p=1;
    for(int i=1; i<=b; i++){
        p *= a;
    }
    cout<<a<<" raised to the power "<<b<<" is equal to "<<p;
    return 0;
}