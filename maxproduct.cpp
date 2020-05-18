#include<iostream>
using namespace std;
int main()
 {
  long int a[10^4],n,min,max,temp,p;
  cin>>p;
  while(p--)
  {
  cin>>n;
  for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
  max=a[0];
  min=a[1];
  if(max<min)
  {
    temp=max;
    max=min;
    min=temp;
  }
 
  for(int i=2;i<n;i++)
   {
      if(a[i]>max)
       {
        min=max;
        max=a[i];
        }
      else if(a[i]>min)
     
        min=a[i];
    }
    cout<<min*max<<endl;
}
 return 0;
}  
  
          
