#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 long long int n,t,start,end,sum,k;
  cin>>t;
  while(t--)
  {
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  sum=0;
 k=n/2;
  for(int i=0;i<n-1;i++)
  {  
      start=a[i];
      end=a[n-i-1];
      if(k)
      {
      sum=sum+start*end;
      k--;
      }
  }
  
  cout<<sum<<endl;
  }
  return 0;
}
