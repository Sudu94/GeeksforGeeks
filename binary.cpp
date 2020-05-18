#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[10],n,t,count;
  cin>>t;
  while(t--)
  {
  cin>>n;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
   count=0;
   for(int i=0;i<n;i++)
    {
      if(a[i]==0)
        count++;
     }
   for(int i=0;i<count;i++)
    
      a[i]=0;
   for(int i=count;i<n;i++)
      a[i]=1;

 
  
  for(int i=0;i<n;i++)
  {
     cout<<a[i]<<" ";
   }
   cout<<endl;
 }
 return 0;
 }
