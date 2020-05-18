#include<iostream>
using namespace std;
int main()
{
 int a[10],n,k,count,p=0,s;
   cin>>n>>k;
   for(int i=0;i<n;i++)
    {
     cin>>a[i];
    }
   
   for(int i=0;i<n-1;i++)
  {
    count=0;
   for(int j=0;j<n;j++)
    {
      if(a[i]==a[j])
       {
       count++;
      
        } 
     } 
     
    if(count==k)
     {
      cout<<a[i];
      break;
      
      }
   }
    if(count!=k)
     cout<<"-1";
  return 0;
}
     
   
