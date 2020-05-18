#include<iostream>
using namespace std;
int main()
{
  long int min,n,s,t,p,max;
  cin>>t;
  while(t--)
  {
  cin>>n;
   long int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
    
 max=0;
  for(int i=0;i<n;i++)
  {
   if(max<a[i])
    {
    max=a[i];
    s=i;
   }
  }
 if(a[0]>a[1])
 {
   min=a[1];
  }
 else
 {
   min=a[0];
 }
for(int i=1;i<s;i++)
  {
    if(a[i]<min)
     {
      min=a[i];
     }  
  }
     if(max==min)
      cout<<"-1"<<endl;
      else
     cout<<max-min<<endl;
  }
   
  
 return 0;
 }
   
    
