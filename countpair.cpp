#include<iostream>
using namespace std;
int main()
{
  int n,k,count=0,t,s;
  cin>>t;
  while(t--)
  {
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
 s=k;
  for(int i=0;i<n-1;i++)
   { 
    for(int j=1;j<n;j++)
    {
    
      
      if(a[i]+a[j]==s)
      {
       count++;
      }
     
    }
   
   }
     cout<<count;
   } 
  return 0;
}
