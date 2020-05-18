#include<iostream>
using namespace std;
int main()
{
  long int n,p,max,min;
  cin>>p;
  while(p--)
  {
  cin>>n;
  long int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
    }
    if(a[0]>a[1])
    {
      max=a[0];
      min=a[1];
     }
     else{
         max=a[1];
         min=a[0];
     }
    
    for(int i=2;i<n;i++)
     {
        if(a[i]>max)
         {
          max=a[i];
          }
        else if(a[i]<min)
         {
          min=a[i];
       }
    }
    cout<<max-min<<endl;
    }
     return 0;
}
