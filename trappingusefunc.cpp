#include<iostream>
#include<algorithm>
using namespace std;
void call();
int main()
{
  int t;
  cin>>t;
  while(t)
  {
     call();
     t--;
   }
 return 0;
}
 void call()
 {
 int n,max,max1;
  int a[n];
  int b[n];
  int k[n];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
   b[i]=a[i];
   k[i]=a[i];
  }
   max1=a[0];
  for(int i=1;i<n;i++)
  {
     if(max1>a[i])
      a[i]=max1;
      else
      max1=a[i];
   }
  max=a[n-1];
  for(int i=n-2;i>=0;i--)
  {
    if(max>b[i])
     b[i]=max;
    else
     max=b[i];
  }
 int sum=0;
 for(int i=0;i<n;i++)
{
   if(k[i]>std::min(a[i], b[i]))
   sum=sum+k[i]-std::min(a[i], b[i]);
   else
    sum=sum+std::min(a[i], b[i])-k[i];
}
 cout<<sum<<endl;
}
