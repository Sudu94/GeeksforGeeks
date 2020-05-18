#include<iostream>
using namespace std;
int main()
{
  int n,t,start,count;
  cin>>t;
  while(t--)
  {
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
  count=0;
  start=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==start)
      count++;
   }
    cout<<count<<endl;
  }
 
  return 0;
}
