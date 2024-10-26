#include <iostream>
#include <fstream>
using namespace std;


int main(){
    //Connecting our file with vout stream
    ofstream vout("abc.txt");//Write Operation

    //creating a string to write in file
    string s;
    cout<<"Enter a string to write into a file:"<<endl;
    cin>>s;

    //Writing string to the file
    vout<<s;

    //closing the file
    vout.close();

    
    ifstream hin("abc.txt");
    string st; //to store after reading
    hin>>st; //will print only My
    cout<<"The content in the file is: "<<st;

    hin.close();
    return 0;
}