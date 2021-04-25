#include <iostream>
using namespace std;

class base1{
public:
    virtual void fun1(){
    cout<<"base1::fun1"<<endl;
    };
    virtual ~base1(){};
};

class base2:public base1 {
public:
    virtual void fun1(){
        cout <<"base2::fun1"<<endl;
    };
    virtual void fun2(){
        cout<<"base2::fun2"<<endl;
    };
};

class der:public base2 {
public:
    virtual void fun1(){
        cout<<"der::fun1"<<endl;
    };
    virtual void fun2(){
        cout<<"der::fun2"<<endl;
    };
};

void fun(base1* p){
    p->fun1();
    base2* p1=dynamic_cast<base2*>(p);
    if (p1!=0) p1->fun2();
};

int main()
{
    base1 p;
    fun(&p);
    base2 d;
    fun(&d);
    der d1;
    fun(&d1);
    return 0;
}

