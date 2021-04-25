#include<iostream>
using namespace std;

class Base {
public :
    int fn1(){
        cout << "run fn1"<<endl;
        return 0;};
    int fn2(){
        cout << "run fnr2"<<endl;
        return 0;};
};

class Derived: private Base{
public:
    Derived(int a):a(a){};
    int a;
    int fn1(){
        Base:: fn1();
        return 0;
    };
    int fn2(){
        Base:: fn2();
        return 0;
    };
}; 
int main()
{
    Derived a(1);
    a.fn1();
    a.fn2();
    return 0;
}

