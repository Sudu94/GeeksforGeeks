#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
 int n,temp,k,sum,max,t,res,b[100];
 cin>>n;
  int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
k=n;
 while(k--)
 {
 temp=a[0];
 for(int i=0;i<n;i++)
 {
   a[i]=a[i+1];
  }
  a[n-1]=temp;


sum=0;
int max=INT_MIN;
for(int i=0;i<n;i++)
{
 sum=sum+a[i]*i;
  if(max>sum)
   max=sum;
 }
 
cout<<max<<" ";
}

return 0;
}
