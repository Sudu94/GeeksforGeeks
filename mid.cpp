#include<iostream>
using namespace std;
int main()
{
   int n,a[1000],fbig,sbig,temp;
   cin>>n;
 for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
   
      fbig=a[0];
      sbig=a[1];
       if(fbig<sbig)
         {
          temp=fbig;
          fbig=sbig;
          sbig=temp;
          }
         
     for(int i=2;i<n;i++)
       {
      if(a[i]>fbig)
      {
       sbig=fbig;
       fbig=a[i];
      }
        
      else if(a[i]>sbig)
       {  
        sbig=a[i];      
         }
      }
       cout<<sbig;
     
  return 0;
 }
    
