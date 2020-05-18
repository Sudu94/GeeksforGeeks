#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
int n,start=0,end,swap,count,loc;
char a[10],b[10];
cin>>n;
while(n--)
{
   cin>>a;
  strcpy(b,a);
  

 end=n-1;
 while(start<end)
 {
  swap=a[start];
  a[start]=a[end];
  a[end]=swap;
  start++;
  end--;
  } 
 
 for(int i=0;i<n;i++)
 {
  loc=a[i];
  if(loc==b[i])
  {
  count++;
    }
  }
 cout<<count*count;
}
 return 0;
}
