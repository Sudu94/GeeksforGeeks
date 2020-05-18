#include<iostream>
using namespace std;
int main()
{
  int n,i,j,max,count,t;
  cin>>t;
  while(t--)
  {
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for( i=0;i<n;i++)
   {
     for( j=i+1;j<n;j++)
     {
       if(a[i]<a[j])
        break;
      }
    if(j==n)
    cout<<a[i]<<" ";
   }
 }
 return 0;
}
