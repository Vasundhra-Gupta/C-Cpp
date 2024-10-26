#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map <string, int> marks;
    marks["vasu"]=99;
    marks["raja"]=9;
    marks["anshit"]=2;
    marks["vashu"]=98;
    marks.insert({{"avni", 93}, {"krishna", 59}});//double brackets
    //iterator
    map <string, int> :: iterator iter;
    for(iter= marks.begin(); iter!= marks.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is "<<marks.size()<<endl;
    cout<<"The maximum size is "<<marks.max_size()<<endl;
    cout<<"The empty return value is "<<marks.empty()<<endl;//0 means not empty
    return 0;
}