#include <iostream>
using namespace std;

template<class t>
void output(const t* array,int count){
    for(int i=0;i<count;i++)
        cout<<array[i]<<" ";
    cout<<endl;
};

int main()
{
    const int a=8,b=8,c=20;
    int aa[a]={1,2,3,4,5,6,7,8};
    double ba[b]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,};
    char ca[c]="welcome tu see you";
    cout<<"a:"<<endl;
    output(aa,a);
    cout<<"ba:"<<endl;
    output(ba,b);
    cout<<"c:"<<endl;
    output(ca,c);
    return 0;
}

