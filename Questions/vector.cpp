// to create a vector, createnit, modify it, multiplying by a scalor and display it
#include <iostream>
using namespace std;
class vector{
    int n;
    int vector[20];
    public:
    void create(){
        cout<<"Size"<<endl;
        cin>>n;
        cout<<"Enter vectors:"<<endl;
        for(int i=0; i<n; i++){
            cin>>vector[i];
        }
    }
    void modify(){
        int p, v;
        cout<<"Position to be modified"<<endl;
        cin>>p;
        cout<<"Modified Value"<<endl;
        cin>>v;
        vector[p]= v;
    }
    void multiply(){
        int m;
        cout<<"Enter scalor value to be multiplied"<<endl;
        cin>>m;
        for(int i=0; i<n; i++){
            vector[i]=vector[i]*m;
        }
    }
    void display(){
        cout<<"(";
        for(int i=0; i<n; i++){
            cout<<vector[i];
            if(i!=n-1){
                cout<<",";
            }
        }
        cout<<")"<<endl;
    }
};
int main(){
    vector v;
    v.create();
    v.display();
    v.modify();
    v.display();
    v.multiply();
    v.display();
    return 0;
}