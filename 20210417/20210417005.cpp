#include<iostream>
#include<string>
using namespace std ;

class employee
{
public :
    employee(int name):name(name){};
    void setname(){
        int name2;
        cin>>name2 ;
        name=name2;
    };
private :
    int name ;
    string city;
    string adress;
    int mum;
};

int main()
{
    string s1="beijing";
    string s2="sss";

    employee e(123);
    e.setname();
    return 0;
}

