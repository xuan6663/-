#include<iostream>
using namespace std;
void fun(int *p)
{
int i,j,k;
for(i=0;i<3;i++)
{
for(j=i;j<3;j++)
{
k=*(p+3*i+j);
*(p+3*i+j)=*(p+3*j+i);
*(p+3*j+i)=k;
}
}
}
int main()
{
int i,j,*p2;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for( i=0;i<3;i++)
{
for( j=0;j<3;j++)
cout<<*(*(a+i)+j)<<" ";
cout<<endl;
}
cout<<endl;
p2=&a[0][0];
fun(p2);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
cout<<*(*(a+i)+j)<<" ";
cout<<endl;
}
}; 
