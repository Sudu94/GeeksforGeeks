#include<iostream>
using namespace std;
int main()
{
 int n,no,i,ans,p;
 cin>>n;
  i=1;
  ans=0;
 while(n>0)
 {
   no=n%10;
   if(no==0)
    ans=5*i+ans;
   else
    ans=no*i+ans;
    i=i*10;
    n=n/10;
}
 cout<<ans;

  return 0;
}
