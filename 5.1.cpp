#include<iostream>
using namespace std;

class alpha
{
protected:
  int x;
public:
  alpha(int a)
  {
    x=a;
    cout<<"Constructor alpha called";
  }
};

class beta
{
protected:
  float y;
public:
  beta(float c)
  {
    y=c;
    cout<<"\nConstructor beta called";
  }
};

class gamma: public alpha,beta
{
protected:
  int p;
  int q;
  float m;
  float n;
public:
  gamma(int a, int b, float c, float d):alpha(a), beta(c)
  {
    p=a;
    q=b;
    m=c;
    n=d;
    cout<<"\nConstructor gamma called"<<endl<<"Value of x= "<<x;
    cout<<"\nValue of y= "<<y<<endl<<"Value of p= "<<p;
    cout<<"\nValue of q= "<<q<<endl<<"Value of m= "<<m;
    cout<<"\nValue of n= "<<n;
  }
};

int main()
{
gamma ob(1,2,12.5,11.5);
}
