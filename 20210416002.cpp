#include<iostream>
using namespace std;
class point {
public :
point (int x , int y):x(x),y(y){};
void print(){
cout<<"（"<<x<<","<<y<<")";
};
private :
int x;
int y;

};
int main()
{
    int x;
    int y;
    cin>> x;
    cin>> y;
    point p1(x,y);
    p1.print();
    return 0;
}

