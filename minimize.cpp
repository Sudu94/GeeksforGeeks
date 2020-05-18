#include<iostream>
using namespace std;
int main()
 {
   int a[10],b[10],temp,loc,min,n,temp1,loc1,min1,sum,p;
   cin>>p;
   while(p--)
   {
   cin>>n;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
    
    }

   for(int i=0;i<=n-2;i++)
    {
      
       for(int j=i+1;j<=n-1;j++)
          {
            if(a[i]>a[j])
             {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;

               }
            }
        
     } 
for(int i=0;i<n;i++)
 {
  cin>>b[i];
 }
    for(int i=0;i<=n-2;i++)
    {
      
       for(int j=i+1;j<=n-1;j++)
          {
            if(b[i]<b[j])
             {
               temp1=b[i];
               b[i]=b[j];
               b[j]=temp1;

               }
            }
        
     } 
     
  
   sum=0;
 for(int i=0;i<=n-1;i++)
  {
 
 loc=a[i]*b[i]; 
 
 sum=sum+loc;
 
}
 cout<<sum<<endl;
}
 return 0;
 }
