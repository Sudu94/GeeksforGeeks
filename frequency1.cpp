#include<iostream>
using namespace std;
int main()
{
  int n,t,a[1000],b[1000],k,c=0;
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
   k=0;
  for(int i=0;i<n;i++)
  {
     k=1;
     c=1;
     if(a[i]!=-1)
     {
    for(int j=i;j<n;j++)
    {
      if(k==a[j])
       {
         c++;
         a[i]=-1;
       }
     }
     b[i]=c;
     }
    k++;
  }
  for(int i=0;i<n;i++)
  {
     if(b[i]!=-1)
     cout<<b[i]<<" ";
   }
 cout<<endl;
}
return 0;
}
