#include<iostream>
using namespace std;
int main()
{
  int t,count,i,j,maxcount,index;
  cin>>t;
  while(t--)
  {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
   }
   maxcount=0;
   index=0;
  for(int i=0;i<n;i++)
  {
   count=0;
   for(int j=0;j<n;j++)
   {
      if(a[i]==a[j])
      count++;
    }
    if(count>maxcount)
     {
      maxcount=count;
      index=i;
     }
  }
    if(maxcount>n/2)
    cout<<a[index];
    else
     cout<<"-1";
 }
 return 0;
}
