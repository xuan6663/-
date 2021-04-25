#include<iostream>
using namespace  std;

void scan(int*p){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cin>>*(*(p+i)+j);
        }
};

void print(int* p){
    for(int i=0;i<3;i++)
             for(int j=0;j<3;j++){
               cout<<*(*(p+i)+j);
             }

};
int main()
{

    int p[3][3];
    int *p2;
    p2=&p[0][0];
    scan(p2);
    cout <<p[2][2];
    print(p2);
    return 0;
}

