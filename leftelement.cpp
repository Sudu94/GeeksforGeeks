#include<iostream>
using namespace std;
int main()
 {
   int a[10],n,c,first=0,end,p,b[10];
    cin>>n>>p;
    for(int i=0;i<n;i++)
     {
       cin>>a[i];
      }
       for(int i=0;i<n;i++)
        {
          
            if(i>=p)
             {
              b[i]=a[i];
              }
            else if(i<p)
             {
              b[i]=a[i];
              }
          }
       for(int i=0;i<n;i++)
        {
           cout<<b[i];
         }
    return 0;
  }
