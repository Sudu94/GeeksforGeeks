#include<iostream>
using namespace std;
int main()
{
   int n,t,max,min,l,i;
  cin>>t;
  while(t--)
  {
  cin>>n;
   long int a[n];
   for( i=0;i<n;i++)
    cin>>a[i];
    max=a[1]-a[0];
    for(int i=0;i<n;i++)
     {
       for(int j=i+1;j<n;j++)
       {
           if(a[j]-a[i]>max)
            max=a[j]-a[i];
         }

      } 
       cout<<max;
   
  }
 return 0;
 }
   
    
