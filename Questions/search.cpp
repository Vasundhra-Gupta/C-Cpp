//To search and delete an element in an array.
#include <iostream>
using namespace std;
class array{
    int arr[5];
    int size=5;
    public:
    void input(){
        cout<<"Enter an array:"<<endl;
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
    }
    void search(int target){
        bool found= false;
        for(int i=0; i<size; i++){
            if(arr[i]==target){
                cout<<"The desired element is at position "<<i+1<<"."<<endl;
                found=true;
                break;
            }
        }
        if(!found){
                cout<<"Not found the desired element."<<endl;
        }
    }
    void del(int d){
        for(int i=0; i<size; i++){
            if(arr[i]==d){
                for(int j=i; j<size; j++){
                    arr[i]=arr[i+1];
                }
                size--;
            }
        }
    }
    void display(){
        cout<<"Updated Array"<<endl;
        for(int i=0; i<size; i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    array a;
    a.input();
    int s,d;
    cout<<"Enter the element to be searched:"<<endl;
    cin>>s;
    a.search(s);
    cout<<"Enter the element to be deleted:"<<endl;
    cin>>d;
    a.del(d);
    a.display();
    return 0;
}