#include<iostream>
using namespace std;
int main()
 {
   int a[10],n,i,j,loc,p,max,min,k;
   cin>>p;
   while(p--)
   {
   cin>>n;
   for(i=0;i<n;i++)
    {
     cin>>a[i];
    }
    
     min=a[0];
     max=a[0];
    for(i=1;i<n;i++)
       {
         if(a[i]<min)
          {
            min=a[i];
           }
          if(a[i]>max)
           {
            max=a[i];
            }
         }
       cout<<min;
     
       
  }      
    
 return 0;
}
