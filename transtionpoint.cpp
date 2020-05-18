#include<iostream>
using namespace std;
int main()
{
  int n,t,l;
   cin>>t;
   while(t--)
   {
  cin>>n;                                   
  long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
   for(int i=0;i<n;i++)
    {
     l=a[i];
     if(a[i]==1)
     {
      cout<<i;
      break;
     }
    }
     if(l!=1)
     cout<<"-1";
  }
 return 0;
}
