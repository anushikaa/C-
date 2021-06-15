#include<iostream>
using namespace std;

int main()
{
  int n,i,f1=-1,f2=1,f;
  cout<<"Enter number of terms you need:";
  cin>>n;
  for(i=0;i<n;i++)
  {
    f=f1+f2;
    cout<<f<<"\t";
    f1=f2;
    f2=f;
  }
}
