#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[10],n,temp,i,j,ans;
  cin>>n;
  for(i=0;i<n;i++)
     cin>>a[i];
      sort(a,a+n);
    
    for(i=n-1;i>=0;i--)
    {
       if(a[i]%2!=0)
       cout<<a[i];
    }
    for(i=0;i<n;i++)
     {
       if(a[i]%2==0)
       cout<<a[i];
     }
   
  return 0;
}
       
