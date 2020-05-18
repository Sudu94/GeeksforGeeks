#include<iostream>
using namespace std;
int main()
 {
   int n,a[100],max,p,b[100],loc;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
    
  for(int i=0;i<n;i++)
 {
   
   max=a[i+1];
   for(int j=i+2;j<n;j++)
    {
      if(a[j]>max )
       {
         max=a[j];
     }
     
  }
     b[i]=max; 
     }

           
  
   for(int i=1;i<n;i++)
   {
      
       cout<<b[i-1];
    if(i==n-1)
     {
        cout<<"-1";
      }
     } 
 
     
 return 0;
}
