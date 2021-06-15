#include<iostream>
using namespace std;
class facto
{
public:
  	 long int fact;
  	 facto()
 	  {  	 	    fact=1;
 	  }
 	  facto(int num)
 	  {
 	 	    long int f=1;    	 	    int i;
   	 	    for(i=1;i<=num;i++)
 	 	    {   	 	 	     f*=i;
  	 	    }
     	 	    fact=f;   	  }
 	  facto( facto &num)
  	  {
  	 	    fact=num.fact;
 	 	    cout<<"\n Copied value using copy constructor: "<<endl;
 	  }
  	  void disp(int n)
  	  {
  	 	    cout<<"\n\tFact: "<<n<<"! = "<<fact<<endl;
 	  }
};

int main()
{
 	  int n;
 	 	  cout<<"Enter a number to find factorial: ";
 	 	  cin>>n;
 	  facto num(n); 	  //factorial using constructor//
 	 	  cout<<"\n Original Factorial: "<<endl;  	 	  num.disp(n);

  	  facto cop(num);  //copy constructor//
 	 	  cop.disp(n);
 	  return 0;
}
