#include <iostream>
using namespace std;
int main()
{
  long int n,temp,max,max1,t;
  while(t--)
  {
  cin>>n;
  long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  max=a[0];
  max1=a[1];
  if(max<max1)
  {
   temp=max;
   max=max1;
   max=temp;
  }
   for(int i=2;i<n;i++)
   {
     if(max<a[i])
      {
        max1=max;
        max=a[i];
       }
     else if(a[i]<max && a[i]>max1)
       max1=a[i];
    }
  if(max==max1) 
  cout<<"-1"<<endl;
  else
  cout<<max1<<endl;
  }
  return 0;
}
