#include<iostream>
using namespace std;
int main()
{
  int n,t,count,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
     count=0;
    for(int i=0;i<n;i++)
     {
      for(int j=0;j<n;j++)
       {
         if(a[i]%a[j]==k)
          count++;
        }
      }
     cout<<count<<endl;
    }
  return 0;
}
    
