#include<iostream>
using namespace std;
int main()
{
  int n,t,l,a[100];
  cin>>n;
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
  if(a[n]<=1)
  {
   for(int i=0;i<n;i++)
    {
 
     if(a[i]==1)
     {
     cout<<i;
     break;
      }
     else if(a[i]!=1)
     {
      cout<<"-1";
      }
     }
      
  }
 return 0;
}
