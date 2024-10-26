#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    //Counting number of digits
    int digits=0;
    while(n>0){
        n=n/10;
        digits++;
    }
    cout<<"The Number of Digits is "<<digits<<endl;
    return 0;

}