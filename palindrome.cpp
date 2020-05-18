#include<iostream>
using namespace std;
int main()
 {
   int n,a[10],rev,num,loc,min,p;
   cin>>p;
   while(p--)
  {
   cin>>n;
   for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
     
   for(int i=0;i<n;i++)
    {
     loc=a[i];
      rev=0;
     while(loc>0)
      {
        num=loc%10;
        rev=(rev*10)+num;
        loc=loc/10;
       }
       min=a[i];
     }
      if(rev==min)
       {
 
        cout<<" 1" <<endl;
       }
       else
       { 
       cout<<" 0" <<endl;
        
        }
        
 
     
 }
     
  return 0;
 }p

  
