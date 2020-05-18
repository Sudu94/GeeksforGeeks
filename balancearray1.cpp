#include<iostream>
using namespace std;
int main()
{
  int a[10],n,p,sum,ans,sum1,t;
  cin>>t;
  while(t--)
  {
  cin>>n;
  for(int i=0;i<n;i++)
   cin>>a[i];
   sum=0;
   sum1=0;
  for(int i=0;i<n;i++)
   {
    ans=n/2;
     if(i<ans)
      sum=sum+a[i];
      else
      sum1=sum1+a[i];
    }
 
  if(sum>sum1)
   cout<<sum-sum1<<endl;
  else
   cout<<sum1-sum<<endl;
 }
 return 0;
}
