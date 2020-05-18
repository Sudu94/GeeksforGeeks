#include<iostream>
using namespace std;
int main()
 {
    int n,sum=0,p,a[10];
    while(p--)
    {
    cin>>n;
    for(int i=1;i<=n;i++)
     {
      cin>>a[i];
       }
     
    for(int i=1;i<=n;i++)
    {
      if(a[i]%2!=0)
       {
      cout<<a[i];
        
        }
    
    } 
 }
   return 0;
}
