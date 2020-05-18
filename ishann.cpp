#include<iostream>
using namespace std;
int main()
{
 int n,a[10],min,max;
   cin>>n;
   for(int i=0;i<n;i++)
    {
     cin>>a[i];
     }
     min=a[0];
    for(int i=1;i<n;i++)
     {
      if(a[i]<min)
       {
         min=a[i];
        }
      }
      for(int i=n;i>=1;i--)
       {
         if(a[i]==min)
          {
            max=a[i];
           }
        }
         cout<<max;
   return 0;
}
      
