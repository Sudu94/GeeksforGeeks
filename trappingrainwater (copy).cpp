#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,max,max1,t;
  cin>>t;
  while(t--)                                          
  {
  cin>>n;
  int a[n];
  int b[n];
  int k[n];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  
  }
   max1=0;
  for(int i=0;i<n;i++)
  {
     if(max1<a[i])
     {
      max1=a[i];
      }
     b[i]=max1;
   }
   
  max=0;
  for(int i=n-1;i>=0;i--)
 {
    if(max<a[i])
    {
     max=a[i];
    }
    k[i]=max;
  }

 int sum=0;
 for(int i=0;i<n;i++)
  {
   if(k[i]>std::min(k[i], b[i]))
   sum=sum+a[i]-std::min(k[i], b[i]);
   else
    sum=sum+std::min(k[i], b[i])-a[i];
  
   
  }
cout<<sum<<endl;
}
return 0;
}
