#include<iostream>
using namespace std;

int main()
{
  int n,i,f1=-1,f2=1,f,a[100],j,count,b[100];
  cout<<"Enter number less than which you need all fibonacci terms:";
  cin>>n;
  cout<<"Fibonacci series:";
  i=0;
  count=0;
  do
  {
    f=f1+f2;
    a[i]=f;
    cout<<f<<"\t";
    f1=f2;
    f2=f;
    ++i;
    count++;
}
while((f1+f2)<n);
cout<<endl;
cout<<"\nMissing terms:"<<endl;
j=0;
do
{
  for(i=0;i<count;i++)
  {
    if(a[i]!=j)
    {
      b[]
      continue;
    }
    j++;
  }
}
while(j<n);

}
