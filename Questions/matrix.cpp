//store matrix in base class and double it in derives class
#include <iostream>
using namespace std;
class parentMatrix{
    protected:
    int arr[10][10];
    public:
    void assign(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
            }
        }
    }
    void display(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<"\t ";
            }
            cout<<endl;
        }
    }
};
class childMatrix: public parentMatrix{
    int d[10][10];
    public:
    void twice(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                d[i][j]= 2*arr[i][j];
            }
        }
    }
    void doubleShow(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<d[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main(){
    childMatrix m;
    cout<<"Enter matrix"<<endl;
    m.assign();
    cout<<"Initial Matrix:"<<endl;
    m.display();
    m.twice();
    cout<<"Final Matrix:"<<endl;
    m.doubleShow();
    return 0;
}