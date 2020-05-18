#include<iostream>
using namespace std;
int main()
{
  int a[100],n,s,k,count;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
   }
  for(int i=0;i<n;i++)
   {
     count=0;
    for(int j=0;j<n;j++)
     {
       if(a[i]==a[j])
        count++;
      }
       if(count==1)
        cout<<a[i];
   } 
     
  return 0;
}
