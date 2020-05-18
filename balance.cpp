#include<iostream>
using namespace std;
int main()
{
 int sum,n,a[10],sum1,div,count,count1,add;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 div=n/2;
 sum=0;
  for(int i=0;i<div;i++)
   {
    sum=sum+a[i];
    }
 sum1=0;
   for(int j=div;j<n;j++)
   {
    sum1=sum1+a[j];
   }
   if(sum>sum1)
   {
     add= sum-sum1;
    }
    else
      {
      add= sum1-sum;
      }
  cout<<add;
  return 0;
}
  
