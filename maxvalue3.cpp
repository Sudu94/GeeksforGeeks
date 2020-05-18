#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n,p,first,last,t,d;
  cin>>t;
  while(t--)
  {
  cin>>p>>n;
   int a[n],b[n],k[n];
   int arr[n+1];
  memset(arr, 0, sizeof(arr)); 
  for(int i=0;i<n;i++)
  {
  cin>>a[i]>>b[i]>>k[i];
  }
  int arr[p+1];
  for(int i=0;i<n;i++)
  {
     first=a[i];
     last=b[i];
     arr[first]+=k[i];
     arr[last]-=k[i];
   }
   long long sum = 0, res = INT_MIN; 
    for (int i=0; i < p; ++i) 
    { 
        sum += arr[i]; 
        res = max(res, sum); 
    } 
    cout<<res<<endl;
 }
 return 0;
}
