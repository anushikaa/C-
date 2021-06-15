#include<iostream>
using namespace std;

class item
{
public:
  int no;

  item()
  {
    cout<<"\nconstructor called";
  }

  ~item()
  {
    cout<<"\ndestructor called";
  }

  void show()
  {
    cout<<"in show";
  }
};

int main()
{
  cout<<"\nin main";
  item ob;
  {
    ob.show;
  }
  cout<<"Again in main";
}
