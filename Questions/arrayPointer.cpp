//To input and print an array using pointer
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int *ptr= arr;
    cout<<"Enter an array:"<<endl;
    for(int i=0; i<10; i++){
        cin>>*(ptr+i);//Why ptr+i??
    }
    for(int i=0;i<10; i++){
        cout<<*(ptr+i)<<"\t";
    }
    return 0;
}
