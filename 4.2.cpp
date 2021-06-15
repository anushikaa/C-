#include<iostream>
using namespace std;

class student
{

public:

   	 string name;    	 int age;   	 string address;
   	 student()    	{
    	 	 name="unknown";
    	 	 age=0;
     	 	address="not available";
   	 }
   	 void setInfo(string n, int  a)
   	 {
     	 	name=n;
    	 	age=a;
   	 }

  	void setInfo(string n, int  a, string add)
   	{     	 	 name=n;      	 	age=a;      	 	address=add;
   	}

   	void display(int i)
   	{
        	cout<<endl;
        	cout<<"\n\tDETAILS OF "<<i+1<<"th STUDENT..."<<endl;
       	cout<<"Name: "<<name<<endl;         	cout<<"Age: "<<age<<endl;
        	cout<<"Address: "<<address<<endl;

 cout<<"____________"<<endl;
   	 }
};

int main()
{   int i=0;
  student st[3];

  st[0].setInfo("Shubh",20);
  st[1].setInfo("Jay",20,"Mumbai");
  st[2].setInfo("Rhonda",34,"New York");

  for(i=0;i<3;i++)
  {
    st[i].display(i);
  }
  return 0;
}
