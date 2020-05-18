#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    bool flag=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
             flag=false;
             break;
        }
    }
    return flag;
}


int main()
{
 int n,t;
 bool flag;
 cin>>t;
 while(t--)
{
   cin>>n;
  for(int i=2;i*i<=n;i++)
  {
      if(isPrime(i)==true)
      {
          if(isPrime(n-i)==true)
          {
              cout<<i<<" "<<n-i<<endl;
              flag=false;
              break;
          }
      }
  }
     
       
}
     return 0;
}
