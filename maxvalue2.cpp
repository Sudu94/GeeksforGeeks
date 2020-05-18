#include<iostream>
using namespace std;

int findmax(int n,int a[],int b[],int k[],int m)
{
  int s[n];
 for(int i=0;i<m;i++)
  {
     int first=a[i];
     int last=b[i];
  for(int j=first;j<=last;j++)
  {
    s[j]=s[j]+k[i];
  }
 }
 int res=INT_MIN;
 for(int i=0;i<n;i++)
 {
  res=max(res,s[i]);
 }
  return res;

}


int main()
{
  cin>>n>>m;
  int a[m];
  int b[m];
  int k[m];
  for(int i=0;i<n;i++)
  {
  cin>>a[i]>>b[i]>>k[i];
  }
 cout<<findmax(n,a,b,k,m);
 return 0;
}

