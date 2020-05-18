#include<iostream>
using namespace std;
int main()
{
  int n,t,l;
  cin>>n;                                   
  int a[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
  if(a[n]<=1)
  {
   for(int i=0;i<n;i++)
    {
     if(a[i]==1)
      l=i;
      
     }
      cout<<l;
  }
 return 0;
}
