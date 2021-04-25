#include<iostream>
#include<string>
using namespace  std;

class point {
public:
    point(int x, int y):x(x),y(y){};
    point(){};
private:
    int x,y;
};
class square:public point {
public :
    square(int x , int y ,string col):x(x),y(y),col(col){
        colour+=col;
    };
    int getx(){
        return x;
    };
    int gety(){
        return y;
    };
    void showcolour(){
        cout<<colour<<endl; 
    };
private:
    int x,y;
    static string colour;
    string col;

};
string square:: colour="";
int main()
{
   square b(6,5,"red");
   cout<< b.getx()<<endl;
   cout<< b.gety()<<endl;
   b.showcolour();
   square a(5,6,"yellow");
   cout <<a.getx()<<endl;
   cout <<a.gety()<<endl;
   a.showcolour();


    return 0;
}

