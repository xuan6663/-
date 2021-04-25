#include<iostream>
using namespace  std;

class object {
public :
    object (float weight):weight(weight){};
    float getweight(){
        return weight;
    };
private :
    float weight ;
};

class box :public object
{
public:
    box(float weight,float width):object(weight),width(width){};
    float getwidth(){
        return width;
    };
private :
    float width;

};
int main()
{
    box a(3.14,3.12);
    cout<<a.getwidth()<<endl;
    cout<<a.getweight()<<endl;
    return 0;
}

