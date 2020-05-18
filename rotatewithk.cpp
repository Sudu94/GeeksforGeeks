#include<iostream>
using namespace std;
int main()
{
  int n,p,l,s;
   cin>>n;
   int a[n];
   cin>>p;
  for(int i=0;i<n;i++)
    cin>>a[i];
  
   for(int i=0;i<n;i++)
    {
      s=a[i];
      if(i+p<n)
      a[i]=a[p+1];
      else if(i<p)
      a[(n-p)-i]=a[p-1];
      

     }
   for(int i=0;i<n;i++)
    {
     cout<<a[i];
    }

   return 0;
}
