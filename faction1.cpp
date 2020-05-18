#include<iostream>
using namespace std;
 bool isPrime(int n)
 {
   if(n<=2)
    return true;
   for(int i=2;i*i<n;i++)
    {
      if(n%i==0)
       
        return false;
        
     }
      return true;
  }





 int main()
 {
   int n;
   cout<<"Enter a no :";
   cin>>n;
    if(isPrime(n))
     {
        cout<<"prime number"<<endl;
         }
     else
       {
   cout<<"not a prime number"<<endl;
     }
   return 0;
 }
