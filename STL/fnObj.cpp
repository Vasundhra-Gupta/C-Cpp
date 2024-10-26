#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    int arr[]= {1,254,57,45,98,2};
    sort(arr, arr+5);//it means sort first 5 elements.
    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"After using greater function object:"<<endl;
    sort(arr, arr+5, greater<int> ());//it sorts in decending order!
    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}