#include<iostream>
using namespace std;
int main()
{
   int k,count,n,c=0,t,p;
   char a[1000];
   cin>>n>>a;
     count=c=0;
    
    for(int i=0;i<n;i++)
    {
         while(a[c]!='\0')
         {
            t= a[c] - '0';
            if(t==1)
            count++;
            c++;
           
         }
         
      }
        cout<<count;
    return 0;
 }
