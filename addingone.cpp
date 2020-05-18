#include<iostream>
using namespace std;
int main()
{
  int t,n,p,lb,a[1000],arr[1000];;
  cin>>t;
  while(t--)
  {
   cin>>n>>p;
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<n;i++)
   {
    lb=a[i];
     for(int j=lb;j<=p;j++)
      {
      arr[j]=arr[j]+1;
      }
    }
  for(int i=1;i<=p;i++)
   {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 return 0;
}
 
