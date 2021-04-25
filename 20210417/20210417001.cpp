#include<iostream>
using namespace std;

class circle
{
public :
    circle (int *r):r(r){ };
    float dendel(){
  return 3.14**r**r;

    };
private :
    int *r;
};
int main()
{

    int r;
    cin>>r;
    circle c(&r);
    cout<<c. dendel()<<endl ;
    return 0;
}

