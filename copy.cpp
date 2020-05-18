#include<iostream>
using namespace std;

int main()
{
  
    int a[10],n,n1,n2,sum;
     cin>>n;
    for(int i=0;i<n;i++)
      {
        cin>>a[i];
         }
      for(int i=0;i<n;i++)
         {
         if(a[i]==a[i+1])
           {
             sum=a[i];
              }
        cout<<sum;
          }
return 0;
} 
