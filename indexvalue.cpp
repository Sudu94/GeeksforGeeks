#include<iostream>
using namespace std;
   
int main()
{
  long int n,t,s,k;
  cin>>t;
  while(t--)
  {
  cin>>n;
  long int a[n];
  for(int i=0;i<n;i++)
   {
     cin>>a[i];
    }
   for(int i=0;i<n;i++)
   {
   
     if(a[i]==i)
     {
         cout<<i;
     }
   
    } 
     
  }    
 return 0;
}
