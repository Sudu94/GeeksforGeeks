#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,t,start=0,end,sum,k,l,h;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
   k=n/2;
  



  sum=0;
  for(int i=0;i<=k;i++)
  {
    for(int j=n;j>=k;j--)
    {
    sum=sum+a[i]*a[j];
     }
   }
  cout<<sum;
  return 0;
}
