#include <iostream>
using namespace std;

struct student{
    int id;
    float gpa;
};

template <class t>
class store{
private:
    t item;
    bool havevale;
public:
    store();
    t &getelem();
    void putelem(const t &x);

};

template <class t>
store<t>::store():havevale(false){};


template<class t>
t &store<t>::getelem(){
    if(!havevale){
        cout<<"no item present"<< endl;
        exit(1);
    };
};



int main()
{
    return 0;
}

