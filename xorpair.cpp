#include<iostream>
using namespace std;
int main()
 {
   int n,a[10],sum,min,count,loc,p;
   cin>>p;
    while(p--)
   {
   cin>>n;
   for(int i=0;i<n;i++)
    {
     cin>>a[i];
     }
  
count=0;
 for(int i=0;i<n;i++)
  {
   min=a[i];
    sum=0;
    
   for(int j=i+1;j<n;j++)
    {
     a[sum]=min+a[j];
      loc=a[sum];
     if(loc%2!=0)
      {
       count++;
         }
     
  }
   
}
  
  cout<<count<<endl;
  
}
  return 0;

 }
