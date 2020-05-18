#include<iostream>
using namespace std;
int main()
{
  int n,p,t,k,sum;
  cin>>t;
  while(t--)
  {
  cin>>n>>p;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<p;i++)
  cin>>b[i];
  sum=0;                                    
  for(int i=0;i<n;i++)
   {
     k=0;
     for(int j=0;j<p;j++)
      {
         if(a[i]==b[j])
         {
             k=1;
          }

       }
    if(k==0)
    cout<<a[i]<<" ";
    }
   }
   return 0;
}
    
