#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter rows:"<<endl;
    cin>>r;
    cout<<"Enter columns:"<<endl;
    cin>>c;
    //Hollow rectangle
    cout<<"Hollow Rectangle"<<endl;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1||i==r||j==1||j==c){//key to solve
            cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
    /*  
        1234
        1234
        1234
        1234 
    */
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<j;
        }
        cout<<endl;
    }
    /*  
        1234
        1  4
        1  4
        1234 
    */
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1||i==r||j==1||j==c){
                cout<<j;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    /*  
        121212
        212121
        121212
        212121
    */
   for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if((i+j)%2==0){//Tricky
                cout<<1;
            }else{
                cout<<2;
            }
        }
        cout<<endl;
    }
    
    return 0; 
}