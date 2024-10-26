#include <iostream>
#include <vector>
using namespace std;
// template <typename T>
template <class T>
void display(vector <T> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";same as above
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of your vector:"<<endl;
    cin>>size;
    vector <int> v;
    int e;
    for(int i=0; i<size; i++){
        cout<<"Enter element to add to this vector:"<<endl;
        cin>>e;
        v.push_back(e);//adds an element to the vector
    }
    display(v);
    cout<<"After removing last element:"<<endl;
    v.pop_back();//remove last element
    display(v);
    cout<<"Inserting an element:"<<endl;
    vector <int> :: iterator iter = v.begin();//creating an iterator pointing to first element of vector
    //vector.insert(position, no. of copies, value);
    v.insert(iter+1, 999);//Inserting a value
    display(v);
    vector<char> v2(4);//4 element character vector
    v2.push_back('A');
    display(v2);
    vector<char> v3(v2);
    display(v3);
    vector<int> v4(4,13);//creating a vector that prints 13 four times.
    display(v4);
    cout<<v4.size();
    return 0;
}