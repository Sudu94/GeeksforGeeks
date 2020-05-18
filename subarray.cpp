#include<iostream>
using namespace std;
int main()
{
  int n,t,sum,k,p,s,start,end,a[100];
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>a[i];
     
    sum=1;
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<n;j++)
      {
           if(start==k)
           {
           a[i]=a[i]+a[j];
           start=a[i];
           }
        }
     cout<<a[i]<<" ";
    }
   
     
   }
 return 0;
}
