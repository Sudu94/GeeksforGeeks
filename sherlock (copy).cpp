#include<iostream>
using namespace std;
int main()
 {
   int a[100],n,loc,arr,b[100];
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
     }
  
    for(int i=1;i<=n;i++)
     {
      b[i]=i;
      }
     for(int i=1;i<n;i++)
      {
       loc=a[i];
         }
    
     for(int i=1;i<=n;i++)
      {
       
         if(b[i]!=loc)
          {
            cout<<a[i];
           }
   }
  
  return 0;
}
