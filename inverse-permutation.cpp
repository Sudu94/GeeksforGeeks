#include<iostream>
using namespace std;
int main()
 {
  int n,a[10],loc,index,i,b[10],p;
  cin>>p;
  while(p--)
  {
  cin>>n;
   for(i=1;i<=n;i++)
   {
     cin>>a[i];
   }
    
    for( i=1;i<=n;i++)
    {
       index=a[i];
       loc=i;
     
     b[index]=loc;
      } 
      
     
 for( i=1;i<=n;i++)
  {
  cout<<b[i]<<endl;
  }
    
     
  }  
 
 return 0;
}
