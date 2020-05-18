#include<iostream>
using namespace std;
int main()
 {
   int n,p,a[1000],loc,min,max,count;
    cin>>n>>p;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      }
   loc=p;
  int s=0;
  int t=n-1;
  count=0;
   for(int i=0;i<n;i++)
     {
      min=a[i];
     
     for(int j=i+1;j<n;j++)
       {
       max=a[j];
       while(max!=t)
       {
       if(min==max)
         {
          count++;
         }
        
      }
     
     }
       
   }
    for(int i=0;i<n;i++)
     {
        cout<<a[i]<<count;
      }
     
 return 0;
}
