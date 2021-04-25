#include<iostream>
using namespace std;


class base1{
public:
    virtual void display() const{
        cout<<"base1::display"<<endl;
    };
};

class base2:public base1{
public:
    void display()const{
        cout<<"base::display"<<endl;
    };
};

class der:public base2{
    void display() const=0;
};

void fun(base1 * p){
    p->display();
};

int main()
{
    base1 b1;
    base2 b2;
    fun(&b1);
    fun(&b2);
    return 0;
}

