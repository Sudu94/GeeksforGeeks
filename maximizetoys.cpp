#include<iostream>
using namespace std;
int main()
{
 int n,k,i,sum,count;
 cin>>n>>k;
  int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 sum=0;
 count=0;
 for( i=0;i<n;i++)
 {
   if(a[i]<k)
    {
     sum=sum+a[i];
     if(sum<=k)
     count++;
    }
   
  }
 cout<<count;
return 0;
}
