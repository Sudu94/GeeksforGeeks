#include<iostream>
using namespace std;
int main()
 {
   int a[100],n,temp,min,max;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    }
    max=a[0];
    min=a[1];
    if(max<min)
     {
       temp=max;
       max=min;
       min=temp;
      }
   
   for(int i=2;i<n;i++)
    {
      if(a[i]>max)
       {
         min=max;
         max=a[i];
        }
      if(a[i]>min)
       {
         min=a[i];
       }
    }
      cout<<max<<min;
  return 0;
}
        
     
        
