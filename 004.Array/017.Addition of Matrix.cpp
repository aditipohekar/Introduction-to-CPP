#Day 7

#include<iostream>
using namespace std;
int main()
{
int A[2][3]={{2,5,9},{6,9,15}};
int B[2][3]={{9,5,4},{7,3,2}};
int C[2][3];
for(int i=0;i<2;i++)
{
  for(int j=0;j<3;j++)
  {
    C[i][j]=A[i][j] + B[i][j];
  }
}
  for(int i=0;i<2;i++)
{
  for(int j=0;j<3;j++)
  {
    cout<<C[i] [j];
  }
  cout<<endl;
}
}