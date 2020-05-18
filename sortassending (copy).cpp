#include<iostream>
using namespace std;
int main()
 {
   int n,a[100],min,loc,temp,p;
   cin>>p;
   while(p--)
   {
   cin>>n;
   for(int i=0;i<n;i++)
    {
     cin>>a[i];
     }
    for(int i=0;i<n-1;i++)
     {
       min=a[i];
       loc=i;
       for(int j=i+1;j<n;j++)
        {
          if(a[j]<min)
           {
            min=a[j];
             loc=j;
           }
         }
     temp=a[i];
     a[i]=a[loc];
     a[loc]=temp;
    }
  
    for(int i=0;i<n;i++)
    {
      cout<<a[i];
     }
}
   return 0;
}
