#include <iostream>
using namespace  std ;
class base{
public :
    virtual ~base ();
};

base ::~base (){
    cout <<"base类稀构函数————执行"<<endl;
};

class der:public base{
public :
    der();
    ~der();
private:
    int* p;
};

der::der(){
    p=new int(10);
    };

der::~der(){
    cout <<"der类稀构函数————执行"<<endl;
};


void fun(base * b){
    delete b;
};


int main()
{
    base * b=new der();
    fun(b);
    return 0;
}

