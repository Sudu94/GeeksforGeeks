#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int t,n,m,count,l,p;
  cin>>t;
  while(t--)
  {
   cin>>n>>m;
   int a[n],b[m];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
   for(int i=0;i<m;i++)
   {
     cin>>b[i];
   }
     count=0;
      for(int i=0;i<n;i++)
      {
     
        l=a[i];
       for(int j=0;j<m;j++)
        {
           p=b[j];
           if(pow(a[i],p) > pow(b[j],l))
            {
              count++;
            }
         }
       }
       cout<<count<<endl;
  }
  return 0;
} 
 
