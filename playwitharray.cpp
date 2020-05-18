#include<iostream>
using namespace std;
int main()
{
 int n,a[10],swap;
  cin>>n;
   for(int i=0;i<n;i++)
    {
     cin>>a[i];
     }
     for(int i=0;i<n;i++)
      {
        if(a[i]>a[i+1])
         {
         cout<<"1";
         i++;
       } 
        else 
          cout<<"0";
        break;
     }
   
  return 0;
  }
