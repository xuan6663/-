#include <iostream>
#include <typeinfo>
using namespace  std;

class base{
public :
    virtual ~base(){}
};

class der:public base{};
void fun(base* b){
    const type_info &info1=typeid(b);
    const type_info &info2=typeid(*b);
    cout<<"typedef(b):"<<info1.name()<<endl;
    cout<<"typedef(*b):"<<info2.name()<<endl;
    if(info2==typeid(base))
        cout<<"a base class"<<endl;
};
int main()
{
    base b;
    fun(&b);
    der d;
    fun(&d);
    return 0;
}

