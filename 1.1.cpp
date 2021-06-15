#include<iostream>
using namespace std;

int main()
{
  float tempc, tempf;
  cout<<"Enter temperature in celcius:";
  cin>>tempc;
  tempf= 32+((1.8)*(tempc));
  cout<<"Temperature in fahrenheit is:"<<tempf;
}
