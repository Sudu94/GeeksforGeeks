#include<iostream>
using namespace std;
int main()
{
  int n,a[10],loc,loc1,p,ans,sum=0,fact=1;
  cin>>n;
 for(int i=0;i<n;i++)
 {
   cin>>p;
  loc=p;
  while(loc)
  {
    loc=loc/10;
    fact=fact*10;
  }
 
  while(fact>1)
  {
   fact=fact/10;
   ans=p/fact;
   p=p%fact;
   if(ans==0)
   {
    ans=5;
    }
  cout<<ans;             
  } 

  }


 return 0;
}
