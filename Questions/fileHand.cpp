//File handllng using constructor
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int roll;
    string name;
    string performance;
    cout<<"Enter roll no."<<endl;
    cin>>roll;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"What is the performance:"<<endl;
    cin>>performance;
    ofstream write("abc.txt");//mode is required if fstream is used or when using open function
    write<<"Rollno.: "<<roll;
    write<<"\nName: "<<name;
    write<<"\nPerformance: "<<performance;
    write.close();
};
