#include<iostream>
using namespace std;
int main()
{
  int n,t,temp,l;
  cin>>t;
  while(t--)
  {
    cin>>n;
    l=n;
    int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
  for(int i=0;i<n;i++)
  {
    if(i!=l)
     {
     temp=a[i+2];
     a[i+2]=a[i];
     a[i]=temp; 
    
    }
  
    }
   
 for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
 }
return 0;
}

