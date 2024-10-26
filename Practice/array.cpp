//add, remove data, display total price and items
#include <iostream>
using namespace std;
int const size=3;
class item{
    int code[size];
    int price[size];
    int count;
    public:
    void cnt(){
        count=0;
    }
    void input(){
        cout<<"Enter code"<<endl;
        cin>>code[count];
        cout<<"Enter price"<<endl;
        cin>>price[count];
        count++;
    }
    void removeItem(){
        int a;
        cout<<"code of item to be removed:"<<endl;
        cin>>a;
        for(int i=0; i<count; i++){
            if(code[i]==a){
            price[i]=0;
            }
        }
    }
    void displaySum(){
        int sum=0;
        for(int i=0; i<count; i++){
            sum= sum + price[i];
        }
        cout<<"Total sum is "<<sum<<endl;
    }
    void displayItem(){
        cout<<"Code\tPrice"<<endl;
        for(int i=0; i<count; i++){
            cout<<code[i]<<"\t"<<price[i]<<endl;
        }
    }
};


int main(){
    item order;
    order.cnt();
    int x;
    do{
        cout<<"You can do the following, Enter appropriate number"<<endl;
        cout<<"1: Add an element"<<endl;
        cout<<"2: remove an element"<<endl;
        cout<<"3: display total price"<<endl;
        cout<<"4: display items"<<endl;
        cout<<"5: Exit Program"<<endl;
        cout<<"What is your option"<<endl;
        cin>>x;
        switch(x){
            case 1: 
            order.input();
            break;
            case 2:
            order.removeItem();
            break;
            case 3:
            order.displaySum();
            break;
            case 4:
            order.displayItem();
            break;
            case 5:
            break;
            default:
            cout<<"Invalid input";
        }
    }while(x!=5);
    return 0;
}