#include <iostream>
#include <list>
using namespace std;
void display(list<int>& l){
    list<int>:: iterator itr;
    for(itr=l.begin(); itr!= l.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    list <int> l1;//list of 0 elements
    l1.push_back(14);
    l1.push_back(34);
    l1.push_back(52);
    l1.push_back(50);
    l1.push_back(54);
    cout<<"List 1:"<<endl;
    display(l1);
    l1.pop_back();
    l1.pop_front();
    display(l1);
    l1.remove(52);
    display(l1);

    cout<<"List 2"<<endl;
    list <int> l2(3);//empty list of size 3
    list <int> :: iterator iter;
    iter=l2.begin();
    *iter= 100;
    iter++;
    *iter= 12;
    iter++;
    *iter= 10;
    iter++;
    display(l2);
    l1.merge(l2);
    cout<<"After merging:"<<endl;
    display(l1);
    cout<<"After sorting"<<endl;
    l1.sort();
    display(l1);
    cout<<"After reversing"<<endl;
    l1.reverse();
    display(l1);

    l1.swap(l2);
    display(l1);
    display(l2);
    return 0;
}