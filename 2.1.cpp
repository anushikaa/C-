#include<iostream>
using namespace std;
class second;

class first
{
  string name;
public:
   void input()
   {
     cout<<"Enter first name:";
     cin>>name;
   }
  friend void swap(first,second);
};

class second
{
  string name;
public:
  void input_1()
  {
    cout<<"Enter second name:";
    cin>>name;
  }
  friend void swap(first,second);
};

int main()
{
  first m;
  second n;
  m.input();
  n.input_1();
  swap(m,n);
}

void swap(first m, second n)
{
  cout<<"Before swap first="<<m.name<<" and second="<<n.name<<endl;
  string hold;
  hold= m.name;
  m.name=n.name;
  n.name=hold;
  cout<<"After swap first="<<m.name<<" and second="<<n.name<<endl;
}
