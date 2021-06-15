#include<iostream>
using namespace std;

class student
{
protected:
  string uid;
public:
  void getnumber()
  {
    cout<<"Enter UID:";
    getline(cin, uid);
  }
  void putnumber()
  {
    cout<<"Student UID: "<<uid<<endl;
  }
};

class test:public virtual student
{
protected:
  int phy;
  int chem;
  int maths;
public:
  void getmarks()
  {
    cout<<"Enter marks of Physics:";
    cin>>phy;
    cout<<"Enter marks of Chemistry:";
    cin>>chem;
    cout<<"Enter marks of Maths:";
    cin>>maths;
  }
  void putmarks()
  {
    cout<<"Physics= "<<phy<<endl;
    cout<<"Chemistry= "<<chem<<endl;
    cout<<"Maths= "<<maths<<endl;
  }
};

class sports:public virtual student
{
protected:
  int yoga;
  int tennis;
  int basketball;
public:
  void getscore()
  {
    cout<<"Enter marks of Yoga:";
    cin>>yoga;
    cout<<"Enter marks of Basketball:";
    cin>>basketball;
    cout<<"Enter marks of Tennis:";
    cin>>tennis;
  }
  void putscore()
  {
    cout<<"Yoga= "<<yoga<<endl;
    cout<<"Basketball= "<<basketball<<endl;
    cout<<"Tennis= "<<tennis<<endl;
  }
};

class result:public test,sports
{
protected:
  int total_ac;
  int total_sp;
  int total;
  float perc;
public:
  void get()
  {
    getnumber();
    getmarks();
    getscore();
  }

  void select(string form)
  {
    string comp;
    comp=form;
      if(comp==uid)
      {
        display();
      }
  }
  void display()
  {
    cout<<"---------------------------------------------------"<<endl;
    putnumber();
    putmarks();
    putscore();
    cout<<"---------------------------------------------------"<<endl;
    total_ac=phy+chem+maths;
    total_sp=yoga+tennis+basketball;
    total=total_ac+total_sp;
    perc=(float)(total*100)/600;
    cout<<"Total academic marks= "<<total_ac;
    cout<<"\nTotal extra-curricular marks= "<<total_sp;
    cout<<"\nTotal Marks= "<<total;
    cout<<"\nPercentage= "<<perc;
  }
};

int main()
{
  int n,i;
  string select;
  cout<<"Enter number of students:";
  cin>>n;
  result ob[n];
  for(i=0;i<n;i++)
  {
    cin.ignore();
    ob[i].get();
  }
  cin.ignore();
  cout<<"---------------------------------------------------"<<endl;
  cout<<"Enter the uid of student you want to view marks of:";
  getline(cin,select);
  for(i=0;i<n;i++)
  {
    ob[i].select(select);
  }
}
