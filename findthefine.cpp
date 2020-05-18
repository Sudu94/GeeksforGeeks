#include<iostream>
using namespace std;
int main()
{
  int a[100],n,d,b[100],sum,p;
  cin>>p;
  while(p--)
  {
  cin>>n>>d;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   sum=0;
   for(int i=0;i<n;i++)
    {
     cin>>b[i];
      if(d%2==0)
       {
         if(a[i]%2!=0)
          sum=sum+b[i];
        }
       else
         {
          if(a[i]%2==0)
          sum=sum+b[i];
         }
     }
    cout<<sum<<endl;
  }
 return 0;
 }
