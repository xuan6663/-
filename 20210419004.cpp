#include <iostream>
using namespace std;
class com{
public :
    com(double real=0.0,double imag=0.0):real(real),imag(imag){};
    com operator+ (com &c2){
        return com(real+c2.real,imag+c2.imag);
    };
    com operator- (com &c2){
        return com(real-c2.real,imag-c2.imag);
    };
    friend ostream & operator<< (ostream &out ,const com &c);
    void show(){
        cout<<"("<<real <<","<<imag<<")"<<endl;
    };
    private:
        double real,imag;

};

ostream&operator<<(ostream&out,const com & c ) {

    out<<"("<<c.real<<","<<c.imag<<")";
    return out;
}
int main()
{
    com a(1.0,1.0),b(2.0,2.0),c;
    cout<<"a=";
    a.show();
    cout<<"b=";
    b.show();
    c=a+b;
    cout<<"c=a+b=";
    c.show();
    c=a-b;
    cout<<"c=a-b=";
    c.show();
    return 0;
}

