#include<iostream>
#include<climits>

using namespace std;
int main()
{
 int a[100],b[100],k[100],t,lb,hb,n;
 cin>>n>>t;
 int arr[n];
 for(int i=0;i<t;i++)
 {
 cin>>a[i];
 cin>>b[i];
 cin>>k[i];
 }
 for(int i=0;i<t;i++)
 {
  lb=a[i];
  hb=a[i];
  for(int j=lb;j<=hb;j++)
  {
   arr[j]=arr[j]+k[i];
  }
}
int res=INT_MIN;
for(int i=0;i<n;i++)
res=max(res, arr[i]); 

cout<<res;
 
return 0;
}
