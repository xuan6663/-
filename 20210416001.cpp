#include<iostream>
using namespace std;
class kuowu
{
 public:
kuowu (int toil ){
    mtoil+=toil; 
};                                                                          
void print(){
    cout <<  mtoil;
};
 private :
 int toil=0;
 static int mtoil;
};
int kuowu :: mtoil=0;
int main(){
    int b2 ,c2;
kuowu a(5);
cin>>b2;
cout<<endl;
kuowu b ( b2 );
cin>>c2 ;
kuowu c(c2);
cout<<endl;
c.print();

return 0;}
