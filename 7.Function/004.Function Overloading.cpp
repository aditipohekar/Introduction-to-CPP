#include<iostream>
using namespace std;

int sum(int x,int y)
{
    return x+y;
}
float sum(float a,float b)
{
    return a+b;
}
int sum(int m,int n,int o)
{
    return m+n+o;
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
    cout<<sum(10,20,30)<<endl;
}
