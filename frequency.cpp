#include<iostream>
using namespace std;
int main()
{
 int n,t,c,a[1000],b[1000],k;
 cin>>t;
 while(t--)
 {
  cin>>n;
  
  for(int i=0;i<n;i++)
  cin>>a[i];
 c=0;
 for(int i=0;i<n;i++)
 {
      c=1;
     
         if(a[i]!=-1)
          {
         for(int j=i+1;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
                 a[j]=-1;
             }
            }
         b[i]=c;
       
     }
    
 }
  for(int i=0;i<n;i++)
  {
      if(a[i]!=-1)
      {
          cout<<a[i]<<b[i]<<" ";
      }
  }
  cout<<endl;
}
  return 0;
}
