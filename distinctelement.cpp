#include<iostream>
using namespace std;
int main()
{
 int a[20],n,i,loc1,loc2,j,sum;
 cin>>n;
 for( i=0;i<n;i++)
  {
   cin>>a[i];
   }
 
 
   loc1=a[0];
    sum=0;
 for( i=1;i<n;i++)
  {
   if(loc1!=a[i])
    {
      loc1=a[i]; 
      sum=sum+a[i];
     
      }
    
 }
  cout<<sum;
 return 0;
 }
