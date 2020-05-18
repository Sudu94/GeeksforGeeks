#include<iostream>
using namespace std;
int main()
{
  long long int n,a[10^5],p;
  long int count,loc,min;
  cin>>p;
  while(p--)
  {
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
     } 
   count=0;
    for(int i=0;i<n;i++)
     {
       loc=a[i-1];
       for(int j=i+1;j<n;j++)
       {
         if(a[i] + a[j] < a[i]*a[j])
         {
        min=a[j];
         count++;
         }
        }  
       
     }
     
   if(loc==min)
    {
       cout<<"0"<<endl;
     }
   else
    {
      cout<<count<<endl; 
 }
 }
 return 0;
  }
