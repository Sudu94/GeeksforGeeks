#include<iostream>
using namespace std;
int main()
{
 long int n,p,max,max1,t;
 cin>>t;
 while(t--)
 {
 cin>>n;
 long int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
  if(a[0]>a[1])
   {
    max=a[0];
    max1=a[1];
    }
  else
   {
     max=a[1];
     max1=a[0];
    }
  for(int i=2;i<n;i++)
   {
     if(max<a[i])
      {
        max1=max;
        max=a[i];
       }
     else if(a[i]<max && a[i]>max1)
      max1=a[i];
    }
  cout<<max*max1<<endl;
  }
  return 0;
 }
