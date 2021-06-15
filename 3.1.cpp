#include<iostream>
using namespace std;
typedef long long rr;
int main()
{
  int i,j,n,m;
  cout<<"Enter number of rows:";
  cin>>m;
  cout<<"Enter number of columns:";
  cin>>n;
  int a[m][n];
  for(i=0;i<m;i++)
  {
    cout<<"Enter elements of "<<i+1<<" row in order:";
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"Your matrix:";
  for(i=0;i<m;i++)
  {
    cout<<endl;
    for(j=0;j<n;j++)
    {
      cout<<a[i][j]<<"\t";
    }
  }
  cout<<endl<<"Base address:"<<rr (&a);
  cout<<endl<<"Elements "<<a[m-1][n-1]<<endl;
  cout<<"Address of element:"<<rr (&a[m-1][n-1]);
}
