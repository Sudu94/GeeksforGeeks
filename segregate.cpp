#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long int n,p;
  cin>>p;
  while(p--)
  {
  cin>>n;
  int long a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
   for(int i=0;i<n;i++)
   {
      if(a[i]%2==0)
      cout<<a[i]<<" ";
    }
   for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
       cout<<a[i]<<" ";
    }
  }
 return 0;
}
