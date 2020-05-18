#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n,p,first,last,t,d,s[1000];
  cin>>t;
  while(t--)
  {
  cin>>p>>n;
   int a[n],b[n],k[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i]>>b[i]>>k[i];
  }
  for(int i=0;i<n;i++)
  {
     first=a[i];
     last=b[i];
  for(int j=first;j<=last;j++)
  {
    s[j]=s[j]+k[i];
  }

 }
  int max=0;
  for(int i=0;i<p;i++)
  {
    if(s[i]>max)
     max=s[i];
  }
    
 
cout<<max<<endl;
}
return 0;
}
