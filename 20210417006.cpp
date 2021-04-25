#include<iostream>
using namespace std;

int ** zhanzhi(int **p,int x,int y){
    int x2=y;
    int y2=x;
    int **pp=new int*[x2];
    for (int k=0;k<x2;k++)
    {
        pp[k]=new int[y2];
    };
    for (int i=0;i<x;i++)
        for(int j=0;j<y;j++){
            pp[j][i]=p[i][j];
        };
    int l=0;
    for(int i=0;i<x2;i++)
        for(int j=0;j<y2;j++){
        cout<<pp[i][j]<<" ";
        l++;
    if(l%x2==0)
        cout <<endl;
        };
    return pp;
};
int main()
{
    int x;
    int y;
    cin>>x;
    cin>>y;
   int **p=new int*[x];
    for (int i=0;i<x;i++)
    {
       p[i]=new int[y];
    };
    for (int i=0;i<x;i++)
        for (int j=0;j<y;j++)
        {
            cin>>p[i][j];
        };
    zhanzhi(p,x,y);
}

