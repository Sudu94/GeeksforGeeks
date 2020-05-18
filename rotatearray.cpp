#include<iostream>
using namespace std;
int main()
{
 int a[10],n,p,temp,t;
 cin>>t;
 while(t--)
 {
 cin>>n>>p;
 for(int i=0;i<n;i++)
  {
   cin>>a[i];
   }
  while(p!=0)
   {
    temp=a[0];
   for(int i=0;i<n;i++)
    {
      a[i]=a[i+1];
     }
      a[n-1]=temp;
      
     p--;
}
 
 for(int i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
  }
}
 return 0;
}
