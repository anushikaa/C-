#include<iostream>
using namespace std;

class employee
{
  char names[50];
  float salary;
  char address[100];
  int age;
public:
   void data(int a)
   {
     cout<<"Enter name of "<<a<<" employee:";
     cin>>names;
     cout<<"Enter age:";
     cin>>age;
     cout<<"Enter salary:";
     cin>>salary;
     cout<<"Enter address:";
     cin>>address;
   };

   void print(int b)
   {
     cout<<"Name of the "<<b<<" employee:"<<names<<endl;
     cout<<"Age of the employee:"<<age<<endl;
     cout<<"Salary of the employee:"<<salary<<endl;
     cout<<"Address of the employee:"<<address<<endl;
   };
};

int main()
{
  int n,i;
  cout<<"Enter number of employees:";
  cin>>n;
  employee ob[n];
  for(i=1;i<=n;i++)
  {
    ob[i].data(i);
    cout<<"-----------------------------------------"<<endl;
    ob[i].print(i);
    cout<<endl;
  }
  cout<<"-----------------------------------------"<<endl;

}
