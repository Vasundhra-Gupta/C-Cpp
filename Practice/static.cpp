// staticvariable are shared 
/* 
    Static variables are shared among all objects of the same class, while public variables are unique to each object.
    Static variables have a single copy, while public variables have multiple copies, one for each object.
    Static variables are initialized only once, while public variables are initialized for each object.
*/

#include <iostream>
using namespace std;
class set{
    int code;
    static int count;
    public:
    void setCode(){
        code= count;
        ++count;
    }
    static void showCount(){
        cout<<"Count is "<<count<<endl;
    }
    void showCode(){
        cout<<"Code is "<<code<<endl;
    }
};

int set:: count;
int main(){
    set s1,s2,s3;
    s1.setCode();
    s2.setCode();
    s3.setCode();

    set::showCount();

    s1.showCode();
    s2.showCode();
    s3.showCode();
    return 0;
}