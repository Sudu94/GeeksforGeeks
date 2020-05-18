#include<iostream>
using namespace std;
int main()
{
 int n,sum,a[10],p,k;
 cin>>k;
 while(k--)
 {
 cin>>n;
 for(int i=0;i<n;i++)
  {
   cin>>a[i];
   }
  sum=0;
  p=a[0];
 for(int i=0;i<n;i++)
  {
 
   if(a[i]!=a[i+1] )
    {
     sum=sum+p;
    }
     p=a[i+1];
 }
   
 cout<<sum<<endl;
}
 return 0;
}
