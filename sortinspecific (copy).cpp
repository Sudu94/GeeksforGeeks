#include<iostream>
using namespace std;
int main()
{
  int a[10],n,temp,i,j;
  cin>>n;
  for(i=0;i<n;i++)
   {
     cin>>a[i];
    }
   for(i=0;i<n;i++)
    {
    
        if(a[i]%2!=0)
         {
           if(a[i]<a[i+1])
            {
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
             }
           }
          
           if(a[i]%2==0)
         {
           if(a[i]>a[i+1])
            {
              
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
             }
           }
     
      }
      for(i=0;i<n;i++)
   {
     cin<<a[i];
    }
  return 0;
}
       
