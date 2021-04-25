#include<iostream>
using namespace std;

class Base0 {
public:
    int var0;
    void  fun{

    };
};
class Base1 :virtual public Base0 {
public :                 
    int var;             
    void fun(){          
        cout<<"cout<<Base1"<<var<<endl;
    };                   
};

class Base2:virtual public Base0 {             
public:                  
    int var;             
    void fun(){          
        cout<<"cout<<Base2"<<var<<endl;
    };                   
};

class Der:public Base1,public Base2 {
public:
    using Base1::var;
};


int main()
{
    Der d;
    d.var0=2;
    d.fun0();
    return 0;
};

