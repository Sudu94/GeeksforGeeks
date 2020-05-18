#include<iostream>
using namespace std;
int main()
{
 int n,a[10],flag=0;
 cin>>n;
 for(int i=0;i<n;i++)
 {
   cin>>a[i];
  }
 
 flag=0;
   for(int i=0;i<=n-2;i++)
   {
     if(flag)
      {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1])
      }
     else
       {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1])
       }
      flag=!flag;
    }
 for(int i=0;i<n;i++)
  {
   cout<<a[i];
   }
     return 0;
 }
