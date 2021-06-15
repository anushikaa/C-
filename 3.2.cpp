#include<iostream>
using namespace std;

class student
{
  int score1;
  int score2;
  int score3;

public:
  void input()
  {
    cout<<"Enter score of first subject:";
    cin>>score1;
    cout<<"\nEnter score of second subject:";
    cin>>score2;
    cout<<"\nEnter score of third subject:";
    cin>>score3;
  }
  friend int TotalScore(student);
};

int TotalScore(student s)
{
  int sum;
  sum=s.score1+s.score2+s.score3;
  return sum;
}

int main()
{
  student s1,s2,s3;
  cout<<"Enter details of first student:"<<"\n\n\n";
  s1.input();
  cout<<"\nEnter details of second student:"<<"\n\n\n";
  s2.input();
  cout<<"\nEnter details of third student:"<<"\n\n\n";
  s3.input();

  cout<<"\n\nTotal score of first student="<<TotalScore(s1);
  cout<<"\nTotal score of second student="<<TotalScore(s2);
  cout<<"\nTotal score of third student="<<TotalScore(s3);
}
