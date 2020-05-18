#include<iostream>
using namespace std;
int main()
{
 long int n,max,min,t,a[100];
  cin>>t;
  while(t--)
  {
   cin>>n;
   for(int i=0;i<n;i++)
    cin>>a[i];
  min=a[0];
  max=a[0];
  for(int i=0;i<n;i++)
    {
      if(a[i]<min)
       {
        min=a[i];
       }
      if(a[i]>max)
       {
         max=a[i];
        }
     }
   cout<<max<<" "<<min<<endl;
  }
   return 0;
}
