#include<iostream>
using namespace std;
int main()
 {
   int n,min,max,p,s,temp;
     int a[10],b[10];
   cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
   }
 
    min=max=INT8_MIN;
    for(int i=0;i<n;i++)
     {
      
        if(a[i]>max)
          {
            min=max;
            a[max]=a[i];
            }  
         else if(a[i]>min)
          {
           min=a[i];
         }
          else
            b[i]=a[i];
     } 
      for(int i=2;i<n;i++)
        {
         cout<<b[i];
         } 
    
 return 0;
}
