#include <iostream>
using namespace std;

template<typename T>
T abs(T x){
    return x<0? -x:x;
};

int main()
{
    int n=-5;
    float m=-5.5;
    cout<<abs(n)<<endl;
    cout<<abs(m)<<endl;
    return 0;
}

