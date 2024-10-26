#include <iostream>
using namespace std;
int main(){
    //Sum of series 1-2+3-4+5-6....n
    int n;
    cout<<"Enter number of terms:"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum += i;
        }else{
            sum -= i;
        }
    }
    cout<<"The sum of series is "<<sum<<endl;
    return 0;
}