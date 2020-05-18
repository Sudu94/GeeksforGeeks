#include<iostream>
using namespace std;
int main()
{
 long int n,min,min1,t;
  cin>>t;
  while(t--)
  {
   cin>>n;
   int long a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   if(a[0]>a[1])
   {
     min=a[1];
     min1=a[0];
    }
   else
    {
      min=a[0];
      min=a[1];
     }   
  for(int i=2;i<n;i++)
    {
      if(a[i]<min)
       {
         min1=min;
         min=a[i];
       }
      else if(a[i]<min1)
       {
         min1=a[i];
        }
     }
   cout<<min<<min1;
   return 0;
}
