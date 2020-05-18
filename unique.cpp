#include<iostream>
using namespace std;
int main()
{
  int a[10],n,s,k;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
   }
  for(int i=1;i<=n;i++)
   {
      if(i==k)
       cout<<a[i];
    }
      
  return 0;
}
