#include<iostream>
#include<climits>
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
   min1=min=INT_MIN;
  for(int i=0;i<n;i++)
    {
      if(a[i]<min)
       {
         min1=min;
         min=a[i];
         
       }
      else if(a[i]>min && a[i]<min1)
       {
         min1=a[i];
        }
     }

   cout<<min1<<min;
 }
   return 0;
}
