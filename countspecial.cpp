#include<iostream>
using namespace std;
int main()
{
 int n,count,count1,k,fl,a[100],p;
 cin>>n>>k;
 for(int i=0;i<n;i++)
 cin>>a[i];
 fl=n/k;
 for(int i=0;i<n;i++)
 {
   count=0;
   count1=0;
  for(int j=0;j<n;j++)
   {
      if(a[i]==a[j])
      { 
      count++;
      if(count==fl)
      count1++;
      }
    }
    
 }
cout<<count1;

 return 0;
}
