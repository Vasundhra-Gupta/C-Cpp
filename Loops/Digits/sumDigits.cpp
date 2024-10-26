#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    //Sum of digits
    int sum=0;
    while(n>0){
        int lastDigit=n%10;
        sum += lastDigit;
        n=n/10;
    }
    cout<<"The Sum of Digits is "<<sum<<endl;
}