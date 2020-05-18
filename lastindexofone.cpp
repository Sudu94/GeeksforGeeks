#include<iostream>
using namespace std;
int main()
{
   long int count,n,t,c;
   char a[100];
   cin>>n>>a;
     count=c=0;
    
    for(int i=0;i<n;i++)
    {
         while(a[c]!='\0')
         {
            t= a[c] - '\0';
            while(t!=1)
            count++;
            c++;
           
         }
         
      }
        cout<<count;
    return 0;
 }
