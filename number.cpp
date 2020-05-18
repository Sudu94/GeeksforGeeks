#include<iostream>
using namespace std;
int main()
{
 int a[10],n,ans,count,rev,k,num;
 cin>>n;
 for(int i=0;i<n;i++)
  {
    cin>>a[i];
   }
 cin>>k;
 count=0;
 rev=0;
 for(int i=0;i<n;i++)
  {
    num=a[i];
    ans=num%10;
    num=num/10;
    if(k==ans)
     {
     count++;
     }
     else if(k==num)
     {
      rev++;
       }
  }
  cout<<count+rev+1;

 
return 0;
}
   
