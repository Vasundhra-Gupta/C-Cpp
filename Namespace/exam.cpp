#include <iostream>
// #include <vasu.h>
using namespace std;
// using namespace vasu1;
int & great(int &x,int &y,int z=0){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int main(){
    // add(3,4);//from namespace vasu1 defined in vasu.h
    cout<<sizeof('x')<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    int a=2, b=6;
    int n= great(a,b);
    cout<<n<<endl;;
    // great(4,8)= -1; showing error as it wants exact match of data type shayad
    int c=3, d=1;
    great(c,d)= 100;//since it returns reference so value can be assigned to it.
    cout<<great(c,d)<<endl;
    return 0;
}