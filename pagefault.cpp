#include<iostream>
using namespace std;
int main()
{
 int n,p,k,s,i,j,t;
 cin>>t;
 while(t--)
 {
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 cin>>p;
 k=p;
  for(i=0;i<p;i++)
  {
    if(a[i]!=s)
     k++;
   
   for(j=p+1;j<n;j++)
     {
      s=a[j];
      
      }
   
   }
   cout<<k<<endl;
 }
 return 0;
}
