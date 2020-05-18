#include<iostream>
using namespace std;
int main()
{
 int n,a[50],first=0,last,sum1,sum2,ans,p;
  cin>>p;
  while(p--)
  {
  cin>>n;
 for(int i=0;i<n;i++)
  {
    cin>>a[i];
    }
 
  last=n;
  ans=first+last/2;
  sum1=0;
  for(int i=0;i<ans;i++)
   {
    sum1=sum1+a[i];
    }
  sum2=0;
 for(int i=ans;i<n;i++)
   {
    sum2=sum2+a[i];
   }
   if(sum1>sum2)
    {
      cout<<sum1-sum2<<endl;
     }
    else
       {
       cout<<sum2-sum1<<endl;
       }
 }
  return 0;
}
 
