#include<iostream>
using namespace std;
int main()
{
  int a[100],n,count,b[100];
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>a[i];
 
  for(int i=0;i<n;i++)
  {
   count=0;
   for(int j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
       count++;
     }
  cout<<count<<" ";
   }
  

 return 0;
}
