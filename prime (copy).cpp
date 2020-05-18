#include<iostream>
using namespace std;
int main()
{
  int n,n1,loc1,loc2,a[10],mins,temp,min,loc,val;
  
   cin>>n;
    while(n--)
     {
      cin>>n1;
       for(int i=1;i<=n1;i++)
         {
           cin>>a[i];

           
          }
            cin>>loc2;
          for(int i=1;i<=n1;i++)
          {
             min=i;
            if(loc2==min)
            { 
             val=a[i];
              }
            }
         
         for(int i=1;i<=n1-1;i++)
           {
            
           mins=a[i];
           loc1=i;
       for(int j=i+1;j<=n1;j++)
            {
                if(a[j]<mins)
                { 
                  mins=a[j];
                  loc1=j;
                 }
         }
           temp=a[i];
           a[i]= a[loc1];
           a[loc1]=temp;
         
        }
         
for(int i=1;i<=n1;i++)
{
  if(val==a[i])
{
     cout<<a[i];
}
}  

  }   
       
return 0;
}
  
