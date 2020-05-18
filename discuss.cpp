#include<iostream>
using namespace std;
int main()
{
  int n,p,a[10],rev,c,first=0,end,swap;

  
    cin>>n;
  for(int i=0;i<n;i++)
      {  
      cin>>a[i];
        }
      end=n-1;
     while(first<end)
       {
       swap=a[first];
       a[first]=a[end];
       a[end]=swap;
        first++;
        end--;

       }
      
    for(int i=0;i<n;i++)
     {
      cout<<a[i];
       }       
    
 return 0;
 }
