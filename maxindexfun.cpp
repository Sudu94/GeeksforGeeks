#include<iostream>
using namespace std;

int maxindex(int a[],int n)
{
  int max=-1;
  for(int i=0;i<n;i++)
  {
   for(int j=n-1;j>i;j--)
    {
       if(a[i]<=a[j] && max<(j-i))
        max=j-i;
     }
   }
 return max;
}

int main()
{
 int n,t;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int min=maxindex(a,n);
  cout<<min<<endl;
}
  return 0;
}
