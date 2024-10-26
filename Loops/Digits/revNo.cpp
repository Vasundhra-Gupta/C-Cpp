#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    //Reverse of a number
    int rev=0;
    while(n>0){
        int lastDigit=n%10;
        rev= rev*10 + lastDigit;
        n=n/10;
    }
    cout<<"The Reverse of the Number is "<<rev<<endl;
}