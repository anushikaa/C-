#include<iostream>
using namespace std;

int main()
{
  int n, sum, i;
  cout<<"Enter n for sum of n natural numbers:";
  cin>>n;
  sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  cout<<"Sum of "<<n<<" natural numbers is: "<<sum;
}
