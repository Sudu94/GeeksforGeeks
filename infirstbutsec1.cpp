#include<bits/stdc++.h>
using namespace std;
void missing(int a[],int b[],int n,int p)
{
   unordered_set <int> s;
    for(int i=0;i<p;i++)
     {
       s.insert(b[i]);
       }
     for(int i=0;i<n;i++)
     {
        if(s.find (a[i])==s.end())
        {
         cout<<a[i]<<" ";
         }
      }
}
int main()
{
   int n,p,t,j,k;
  cin>>t;
  while(t--)
  {
  cin>>n>>p;
  int a[n];
   int b[p];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<p;i++)
  cin>>b[i];
  
  missing(a,b,n,p);
   }
   return 0;
}
    
