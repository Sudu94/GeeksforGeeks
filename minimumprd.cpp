#include<iostream>
using namespace std;
int main()
{
  int n,min,min1,p,t;
  cin>>t;
  while(t--)
  {
  cin>>n;
  long int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
   min=a[0];
   min1=a[1];

   for(int i=1;i<n;i++)
    {
       if(min>a[i])
        {  min1=min;
           min=a[i];
        }
     else if(min1>a[i])
       {
            min1=a[i];
       }
    }
     
     cout<<min*min1<<endl;  
  }
  return 0;
}
