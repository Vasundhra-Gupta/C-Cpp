//To concatenate two strings of diffrent class into a single other class
#include <iostream>
#include <string.h>
using namespace std;
class string1;
class string2;
class string3{
    char str3[10];
    friend string3 concString(string1 , string2);
};
class string1{
    char str1[10];
    public:
    void input(){
        cout<<"String 1"<<endl;
        cin>>str1;
    }
    friend string3 concString(string1 , string2);
};
class string2{
    char str2[10];
    public:
    void input(){
        cout<<"String 2"<<endl;
        cin>>str2;
    }
    friend string3 concString(string1 , string2);
};
string3 concString(string1 s1, string2 s2){
    string3 s3;
    strcat(s1.str1,s2.str2);
    strcpy(s3.str3,s1.str1);
    cout<<"Concatenated String"<<endl<<s3.str3;
}
int main(){
    string1 s1;
    string2 s2;
    s1.input();
    s2.input();
    concString(s1, s2);
    return 0;
}