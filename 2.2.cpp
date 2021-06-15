#include<iostream>
using namespace std;

class employee
{
public:
  string name;
  int age;
  string designation;
  double salary;

  void data()
  {
    cout<<"Name of the employee:"<<name<<endl;
    cout<<"Age of the employee:"<<age<<endl;
    cout<<"Designation:"<<designation<<endl;
    cout<<"Salary:"<<salary<<endl;
  }
};

int main()
{
  int i;
  employee e[4];
  for(i=0;i<4;i++)
  {
    cout<<"Enter name of "<<i+1<<" employee:";
    cin>>e[i].name;
    cout<<"Enter age of "<<i+1<<" employee:";
    cin>>e[i].age;
    cout<<"Enter designation of "<<i+1<<" employee:";
    cin>>e[i].designation;
    cout<<"Enter salary of "<<i+1<<" employee:";
    cin>>e[i].salary;
  }
  cout<<"---------------------------------------------------------"<<endl;
  for(i=0;i<4;i++)
  {
    e[i].data();
    cout<<endl;
  }
}
