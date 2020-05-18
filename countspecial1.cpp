#include<iostream>
using namespace std;
int main()
{
 int n,count,count1,k,fl,a[1000],p=0,f;
 cin>>n>>k;
 for(int i=0;i<n;i++)
 cin>>a[i];
 
 f=n/k;
 for(int i=0;i<n-2;i++)
  {
   count=0;
   count1=0;
   for(int j=0;j<n;j++)
   {
    if(a[i]==a[j])
     count++;
    else if(count==f)
     count1++;
    }

   }
 cout<<count1;
 return 0;
}
