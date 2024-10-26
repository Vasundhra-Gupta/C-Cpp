#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter rows:"<<endl;
    cin>>r;
    //Reverse left right-angled triangle
    cout<<"Reverse left right-angled triangle"<<endl;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //Pyramid without between spaces
    cout<<"Pyramid without between spaces"<<endl;
    for(int i=1; i<=r; i++){
        for(int s=1; s<=r-i;s++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //Numerical Rectangular Pattern
    cout<<"Numerical Rectangular Pattern"<<endl;
    for(int i=1; i<=r; i++){
        for(int j=i; j<=r; j++){
            cout<<j;
        }
        for(int j=1; j<=i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    /*  
          1  
         121
        12321
       1234321 
    */
   for(int i=1; i<=r; i++){
        for(int s=1; s<=r-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
   }
   cout<<endl;
   /*
            1
           222
          33333
         4444444
    */ 
   for(int i=1; i<=r; i++){
        for(int s=1; s<=r-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    //Printing alphabetical diamond pattern
    /*
            A
           ABC
          ABCDE
         ABCDEFG
          ABCDE
           ABC
            A
    */ 
    cout<<"Printing alphabetical diamond pattern"<<endl;
    //upper triangle
    for(int i=1; i<=r; i++){
        for(int s=1; s<=r-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<char('A'+j-1);
        }
        cout<<endl;
    }
    //lower triangle
    for(int i=r-1; i>=1; i--){
        for(int s=1; s<=r-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<char('A'+j-1);
        }
        cout<<endl;
    }
    cout<<endl;
    //First time problem solved!!
    /*
            1
           2 2
          3   3
         4444444
    */  
   for(int i=1; i<=r; i++){
        for(int s=1; s<=r-i; s++){
            cout<<" ";
        }
        //printing first and last row through this j loop
        for(int j=1; j<=2*i-1; j++){
            if(i==1){
                cout<<i;
            }
            if(i==r){
                cout<<i;
            }
        }
        //printing rows bw first and last through this one j loop
        for(int j=1; j<=2*i-1; j++){
            //avoiding first n last row
            if(i==1||i==r){
                break;
            }
            //printing i at desired position
            if(j==1){
                cout<<i;
            }
            else if(j==2*i-1){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        //     for(int j=1; j<=2; j++){
        //         if(i>1&&i<r&&(j==r-i+1||j==r+i-1)){
        //             cout<<i;
        //         }
        // }
        }
        cout<<endl;
    }
    cout<<endl;
    //print + pattern
    /*    *
          *
        *****
          *
          * 
    */
   cout<<"print + pattern"<<endl;
    if(r%2==0){
        cout<<"Enter odd terms!"<<endl;
        return 0;
    }
    for(int i=1; i<=r; i++){
        for(int j=0; j<r; j++){
            if(i==(r+1)/2){
            cout<<"*";
            }
            else if(j==r/2){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}