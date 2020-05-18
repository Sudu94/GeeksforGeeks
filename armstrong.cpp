#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,t,temp,rev,count=0,sum=0,s;
  cin>>n;
  t=n,s=n;
  while(n!=0)
  {
    rev=n%10;
    count=count+1;
    n=n/10;
   }
  while(t!=0)
  {
    temp=t%10;
    sum=sum+pow(temp,count);
    t=t/10;
  }
  if(s==sum)
   {
    cout<<"armstrong number";
    }
  else
   {
   cout<<"not a armstrong number";
   }
 return 0;
} 
