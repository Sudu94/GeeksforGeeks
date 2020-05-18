#include<iostream>
using namespace std;
int main()
{
 int n,t,k,i,j,sum;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i]; 
int res=0;
for(i=0;i<n;i++)
{
 res^=a[i];
}
  
cout<<res;
 return 0;
}
