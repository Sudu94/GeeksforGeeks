#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int a[10],first,sec,n,c;
 cin>>n;
 for(int i=0;i<n;i++)
  {
 cin>>a[i];
 }
 sort(a,a+n);
      
       
      for(int i=0;i<n-2;i++)
        {
           cout<<a[i]<<" ";
          
             
          } 
   return 0;
 }
