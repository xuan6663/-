#include<iostream>
using namespace std ;

class tuxing {
public :
    tuxing(int area):area(area){};
   float  getarea(){return 0;};
private :
    int area;
};

class juxing: public tuxing {
public :
    juxing(int x1,int y1,int x2,int y2):tuxing(0),x1(x1),x2(x2),y1(y1),y2(y2){};
    juxing():tuxing(0){};
    float getarea() {
        float narea;
        narea=(x1-x2)*(y1-y2);
        if (narea<0.00)
            narea=(-1.00)*narea;
        cout << narea<<endl;
        return 0;
    };
private :
    int x1,x2,y1,y2;
};
 
class circl:public tuxing{
public :
    circl(int x,int y,int r):tuxing(0),x(x),y(y),r(r){};
    float getarea(){
       cout <<  3.14*r*r<<endl;
       return 0; 
    };
private :
    int x,y,r;
};

class zhen:public juxing{
public:
    zhen(int x , int y , int b ):juxing(), x(x),y(y),b(b){};
    float  getarea(){
    cout<<b*b<<endl;
    return 0;
    };
private:
    int x,y,b;
};

int main()
{
    juxing A(1,4,5,6);
    circl B(1,1,6);
    zhen C(1,4,6);
    A.getarea();
    B.getarea();
    C.getarea();
    return 0;
}

