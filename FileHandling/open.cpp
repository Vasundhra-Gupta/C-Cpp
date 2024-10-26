#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream vgout;
    //opening using member fn of ofstream class
    vgout.open("abc.txt");
    vgout<<"Hello, Myself Vasundhra!\n";
    vgout<<"I am studying!\n";
    vgout<<"I am enjoying it too!\n";
    vgout.close();

    ifstream vgin;
    vgin.open("abc.txt");
    //this method
    // string s1, s2, s3;
    // getline(vgin, s1);
    // getline(vgin, s2);
    // getline(vgin, s3);
    // cout<<s1<<s2<<s3;

    //and this method
    string s;
    while(vgin.eof()==0){
        vgin>>s;
        cout<<s;
    }
    return 0;
}