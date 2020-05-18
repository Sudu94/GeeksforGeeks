#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n,p,t,s;
 while(t--)
 {
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 s=a[i];
 }
 if(s<=1)
{
 sort(a,a+n);
 for(int i=0;i<n;i++)
 {
   cout<<a[i]<<" ";
 }
}
}
 return 0;
}

 
