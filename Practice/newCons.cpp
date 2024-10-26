//constructor with new
#include <iostream>
#include <string.h>
using namespace std;
class strings{
    char * name;
    int length;
    public:
    strings(){
        length=0;
        name= new char[length+1];//dynamic initialisation of array
    }
    strings(char* s){
        length= strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    void join(strings &s1, strings &s2){
        length= s1.length+ s2.length;
        delete name;
        name = new char[length+1];
        strcpy(name,s1.name);
        strcat(name, s2.name);
    }
    void display(){
        cout<<name<<endl;
    }
};
int main(){
    char*first= "Joseph";
    strings s1("Rahul"), s2("Shipra"), s3(first), s4, s5;
    s4.join(s1,s2);
    s5.join(s4, s3);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}