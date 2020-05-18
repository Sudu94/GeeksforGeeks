#include<iostream>
using namespace std;
int main()
{
  int n,p,s,t,sum,a[1000],b[1000],j,i;
  cin>>n>>p;
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<p;i++)
  cin>>b[i];
  sum=0;                                    
  for(i=0;i<n;i++)
   {
     for(j=0;j<p;j++)
      {
        if(a[i]==a[j])
          j=0;
        else if(a[i]!=a[j])
         {
           cout<<a[i];
           break;
          }

       }
    }
   
   return 0;
}
    
