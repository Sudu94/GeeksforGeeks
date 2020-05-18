#include<iostream>
using namespace std;
int main()
{
 int n,i;
 cin>>n;
 for( i=2;n>=1;i++)
{
 int ct=0;
    if(n%i==0)
     
     {
      while(n%i==0)
          {
           n=n/i;
          ct++;
           }
         }
        if(n!=1)
        {
         cout<<"yes";
         break;

        }
     else
   {
  cout<<"no";
  break;
    }  
      }
return 0;
}
     
